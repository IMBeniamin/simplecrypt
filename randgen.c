#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void seed_initializer() {
    unsigned int time_seed = time(0);
    srand(time_seed);
}

int get_rand() {
    return rand() % 50;
}
