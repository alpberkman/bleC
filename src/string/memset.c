#include <string.h>

void *memset(void *str, int chr, size_t n) {

    char *s = (char *) str;
    const char c = chr;
    size_t i;

    for(i = 0; i < n; ++i)
        s[i] = c;

    return str;
}
