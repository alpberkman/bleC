#include <string.h>

void *memset(void *str, int c, size_t n){
	
	char *s = (char *) str;
	
	for(size_t i = 0; i < n; ++i){
		s[i] = (char) c;
	}
	
	return str;
}
