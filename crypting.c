#include "randgen.h"
#include <stdlib.h>
#include "string.h"
#include "stdio.h"
typedef struct {
    int len;
    char *randomized_str;
    int *key;
}DeCrypt;

DeCrypt randomized (const char rawstr[], int raw_len) {
    DeCrypt generated;
    generated.randomized_str = (char *)malloc(raw_len);
    generated.key = (int *)malloc(sizeof(int) * raw_len);
    generated.len = raw_len;
    strcpy(generated.randomized_str, rawstr);
    for (int i=0; i < raw_len-1; i++) {
        generated.key[i] = get_rand();
        generated.randomized_str[i] = rawstr[i] + generated.key[i];
    }
    return generated;
}

