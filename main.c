#include <stdio.h>
#include <stdlib.h>
#include "pokemon.h"

char *pokeggroups[] = {"monster", "grass", "dragon", "water 1", "bug", "flying", "field", "fairy", "human-like", "water 3", "mineral", "amorphous", "water 2", "ditto", "no eggs discovered", "gender unknown"};

int main() {
    struct pokemon *eevee = make_pokemon("eevee", pokeggroups[6]);
    struct pokemon *pidgey = insert_front(eevee, "pidgey", pokeggroups[5]);
    struct pokemon *oddish = insert_front(pidgey, "oddish", pokeggroups[1]); 

    print_list(oddish);
    
    free_list(oddish);
    
    return 0;
}
