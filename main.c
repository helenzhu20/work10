#include <stdio.h>
#include <stdlib.h>
#include "pokemon.h"

char *pokeggroups[] = {"monster", "grass", "dragon", "water 1", "bug", "flying", "field", "fairy", "human-like", "water 3", "mineral", "amorphous", "water 2", "ditto", "no eggs discovered", "gender unknown"};

int main() {
    struct pokemon *eevee = make_pokemon("eevee", pokeggroups[6]);
    struct pokemon *pidgey = insert_front(eevee, "pidgey", pokeggroups[5]);
    struct pokemon *oddish = insert_front(pidgey, "oddish", pokeggroups[1]); 

    printf("list:\n");
    print_list(oddish);

    printf("\nremove something not in list:\n");
    struct pokemon *r = remove_pokemon(oddish, "pikachu");
    print_list(r);

    printf("\nremove pidgey:\n");
    struct pokemon *rp = remove_pokemon(oddish, "pidgey");
    print_list(rp);

    printf("\nremove eevee:\n");
    struct pokemon *re = remove_pokemon(oddish, "eevee");
    print_list(re);

    printf("\nremove oddish:\n");
    struct pokemon *ro = remove_pokemon(oddish, "oddish");
    print_list(ro);
    
    free_list(oddish);
    
    return 0;
}
