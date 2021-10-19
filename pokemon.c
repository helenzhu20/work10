#include <stdio.h>
#include <stdlib.h>

struct pokemon {
    char *name;
    char *egggroup;
    struct pokemon *next;
};

void print_pokemon(struct pokemon *f) {
    printf("pkmn name: %s\negg group: %s\n", f->name, f->egggroup);
}

struct pokemon * make_pokemon(char *pkm, char *eg) {
    struct pokemon *p = malloc(sizeof(struct pokemon));
    p->name = pkm;
    p->egggroup = eg;
    p->next = NULL;
    return p;
}




void print_list(struct pokemon *p) {
    while (p != NULL) {
        print_pokemon(p);
        p = p->next;
    }
}

struct pokemon * insert_front(struct pokemon *p, char *pkm, char *eg) {
    struct pokemon *new_p = make_pokemon(pkm, eg);
    new_p->next = p;
    return new_p;
}

struct pokemon * free_list(struct pokemon *p) {
    while (p != NULL) {
        free(p);
        p = p->next;
    }
    return p;
}

struct pokemon * remove_pokemon(struct pokemon *front, char *data) {
    struct pokemon *temp = front;
    while (front != NULL) {
        if (front->name == data && front->next != NULL) {
            front->name = front->next->name;
            front->egggroup = front->next->egggroup;
            front->next = front->next->next;
            break;
        } else if (front->name == data) {
            front->name = NULL;
            front->egggroup = NULL;
            front->next = NULL;
            break;
        } else {
            front = front->next;
        }
    }
    return temp;
}