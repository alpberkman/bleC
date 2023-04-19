#include <string.h>

static char *old_ptr;

char *strtok(char *str, const char *delim) {

    if(str == NULL && old_ptr == NULL)
        return NULL;
    if(str == NULL)
        str = old_ptr;

    str += strspn(str, delim);

    if (*str == '\0') {
        old_ptr = NULL;
        return old_ptr;
    }

    size_t len = strcspn(str, delim);
    if(str[len])
        old_ptr = str + len + 1;
    else
        old_ptr = NULL;

    str[len] = '\0';

    return str;
}

