#include "decrypting.h"
#include "stdio.h"
char * decrypter(const char *origstr, int str_len, const int *key) {
    char *decstr = (char *) malloc(sizeof(str_len));
    for (int i=0; i < str_len-1; i++) {
        decstr[i] = origstr[i] - key[i];
    }
    return decstr;
}