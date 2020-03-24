
#ifndef SIMPLECRYPT_CRYPTING_H
#define SIMPLECRYPT_CRYPTING_H
typedef struct {
    int len;
    char *randomized_str;
    int *key;
}DeCrypt;
DeCrypt randomized (const char rawstr[], int raw_len);
#endif //SIMPLECRYPT_CRYPTING_H
