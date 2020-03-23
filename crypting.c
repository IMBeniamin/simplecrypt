#include "randgen.h"
#include <stdlib.h>
#include "string.h"
char * randomized (const char rawstr[], int raw_len) {
    char *randomized_str = malloc(raw_len);
    strcpy(randomized_str, rawstr);
    for (int i=0; i < raw_len-1; i++) {
        int temp_rand = get_rand();
        randomized_str[i] = rawstr[i] + temp_rand;
    }
    return randomized_str;
}

