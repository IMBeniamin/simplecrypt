#include <stdio.h>
#include "crypting.h"
#include "randgen.h"

int main() {
    DeCrypt loc_generated;
    char str_to_crypt[] = "mystring";
    seed_initializer();
    loc_generated = randomized(str_to_crypt, sizeof(str_to_crypt));
    printf("%s\n", loc_generated.randomized_str);
    for (int i=0; i < loc_generated.len; i++) {
        printf("%d, ", loc_generated.key[i]);
    }
    return 0;
}
