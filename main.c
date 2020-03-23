#include <stdio.h>
#include "crypting.h"
#include "randgen.h"

int main() {
    char str_to_crypt[] = "mystring";
    seed_initializer();
    printf("%s", randomized(str_to_crypt, sizeof(str_to_crypt)));
    return 0;
}
