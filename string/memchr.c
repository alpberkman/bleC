#include "./string.h"

void *memchr(const void *str, int c, size_t n) {

    const char *s = (char *) str;
    for(size_t i = 0; i < n; ++i) {
        if(s[i] == (char) c) {
            return (void *) (str + i);
        }
    }

    return NULL;
}
