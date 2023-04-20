#include <string.h>

int memcmp(const void *str1, const void *str2, size_t n) {

    const char *s1 = (const char *) str1;
    const char *s2 = (const char *) str2;
    size_t i;

    for(i = 0; i < n; ++i)
        if(s1[i] != s2[i])
            return (int) (s1[i] - s2[i]);

    return 0;
}
