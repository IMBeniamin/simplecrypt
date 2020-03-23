#include "randgen.h"
#include <stdlib.h>
char * randomized (const char rawstr[], int raw_len) {
    char *randomized =  malloc(sizeof(char)*raw_len);
    for (int i=0; i < raw_len; i++) {
        int temp_rand = get_rand();
        randomized[i] = rawstr[i] + temp_rand;
    }
}

