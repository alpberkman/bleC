#include <string.h>

char *strrchr(const char *str, int c) {

    for(size_t i = 0; i < strlen(str); ++i) {
        if(str[strlen(str) - 1 - i] == (char) c) {
            return (char *) (str + strlen(str) - 1 - i);
        }
    }

    return NULL;
}

