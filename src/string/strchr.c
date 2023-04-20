#include <string.h>

char *strchr(const char *str, int chr) {

    const char c = chr;

    while(*str != '\0' && *str !=  c)
        ++str;

    return (*str == c ? str : NULL);
}
