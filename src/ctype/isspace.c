#include "./ctype.h"

int isspace(int c) {
    return c == ' ' || (c >= 0x09 && c <= 0x0D);
}
