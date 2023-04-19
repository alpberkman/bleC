#include <string.h>

void *memcpy(void *dest, const void *src, size_t n) {

    char *d = (char *) dest;
    const char *s = (const char *) src;
    size_t i;
    
    for(i = 0; i < n; ++i)
        d[i] = s[i];

    return dest;
}

