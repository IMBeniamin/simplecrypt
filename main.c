#include <stdio.h>
#include "crypting.h"
#include "decrypting.h"

int main() {
    DeCrypt loc_generated;
    char str_to_crypt[] = "mystring";
    seed_initializer();

    // Crypting demo
    printf("Stringa criptata:\n");
    loc_generated = randomized(str_to_crypt, sizeof(str_to_crypt));
    printf("%s\n", loc_generated.randomized_str);

    //Decrypting demo
    printf("Stringa decriptata:\n");
    char *decrypted_str = decrypter(loc_generated.randomized_str, loc_generated.len, loc_generated.key);
    for (int i=0; i < loc_generated.len-1; i++) {
        printf("%c", decrypted_str[i]);
    }
    return 0;
}
