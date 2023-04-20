#include <string.h>

void *memchr(const void *str, int chr, size_t n) {

    const unsigned char *s = (const unsigned char *) str;
    const unsigned char c = (const unsigned char) chr;
    size_t i;

    for(i = 0; i < n; ++i)
        if(s[i] == c)
            return (void *) (s+i);

    return NULL;
}
