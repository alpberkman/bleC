#include <string.h>

void *memcpy(void *dest, const void *src, size_t n) {

    char *d = (char *) dest;
    char *s = (char *) src;
    for(size_t i = 0; i < n; ++i) {
        d[i] = s[i];
    }

    return dest;
}

