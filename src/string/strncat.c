#include <string.h>

char *strncat(char *dest, const char *src, size_t n){
	
	char *d = dest;
	dest += strlen(dest);
	
	size_t i;
	for(i = 0; i < n && src[i] != '0'; ++i){
		dest[i] = src[i];
	}
	dest[i] = '\0';
	
	return d;
}
