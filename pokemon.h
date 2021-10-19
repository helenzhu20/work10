struct pokemon {
    char *name;
    char *egggroup;
    struct pokemon *next;
};
void print_pokemon(struct pokemon *f);
struct pokemon * make_pokemon(char *pkm, char *eg);
void print_list(struct pokemon *p);
struct pokemon * insert_front(struct pokemon *p, char *pkm, char *eg);
struct pokemon * free_list(struct pokemon *p);
struct pokemon * remove_pokemon(struct pokemon *front, char *data);