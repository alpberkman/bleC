#include "./stdlib.h"

static int r = 1;

int rand(void) {
	r *= 32749;
	r += 1;
	return r % RAND_MAX;
}

void srand(unsigned int seed) {
	r = seed;
}
