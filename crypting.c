#include "randgen.h"
#include <stdlib.h>
#include "string.h"

char * randomized (const char rawstr[], int raw_len) {
    char *randomized_str = malloc(raw_len);
    int *pwd_str = malloc(sizeof(int)*raw_len);

    strcpy(randomized_str, rawstr);
    for (int i=0; i < raw_len-1; i++) {
        pwd_str[i] = get_rand();
        randomized_str[i] = rawstr[i] + pwd_str[i];
    }
    return randomized_str;
}

