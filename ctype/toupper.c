#include "./ctype.h"

int toupper(int c) {
    if(islower(c))
        return c - 32;
    else
        return c;
}

