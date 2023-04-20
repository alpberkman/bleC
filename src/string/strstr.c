#include <string.h>

char *strstr(const char *haystack, const char *needle) {

    size_t i;
    char found;

    for(i = 0; i < strlen(haystack) - strlen(needle) + 1; ++i) {

        found = 1;
        for(size_t j = 0; j < strlen(needle); ++j) {
            if(haystack[i + j] != needle[j]) {
                found = 0;
                break;
            }
        }

        if(found) {
            break;
        }
    }

    return found ? (char *) (haystack + i) : NULL;
}

