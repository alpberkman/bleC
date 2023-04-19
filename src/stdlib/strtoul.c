#include "./stdlib.h"

unsigned long int strtoul(const char *str, char **endptr, int base) {
	return strtol(str, endptr, base);
}
