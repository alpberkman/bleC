#include "./string.h"

void *memmove(void *dest, void const *src, size_t n) {

    char *d = (char *) dest;
    char const *s = (char *) src;

    if(d < s) {
        for(size_t i = 0; i < n; ++i) {
            d[i] = s[i];
        }
    } else {
        for(size_t i = n; 0 < i; --i) {
            d[i-1] = s[i-1];
        }
    }

    return dest;
}
