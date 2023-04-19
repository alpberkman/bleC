#include <string.h>

void *memmove(void *dest, void const *src, size_t n) {

    char *d = (char *) dest;
    const char *s = (const char *) src;
    size_t i;

    if(d < s)
        for(i = 0; i < n; ++i)
            d[i] = s[i];
    else
        for(i = n-1; 0 <= i; --i)
            d[i] = s[i];

    return dest;
}
