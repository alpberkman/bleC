#include "./ctype.h"

int iscntrl(int c) {
    return c >= 0x07 && c <= 0x0D;
}
