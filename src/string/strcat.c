#include <string.h>

char *strcat(char *dest, const char *src){
	
	char *d = dest;
	dest += strlen(dest);
	
	size_t i;
	for(i = 0; i < strlen(src); ++i){
		dest[i] = src[i];
	}
	dest[i] = '\0';
	
	return d;
}

/*
 * while(dest++);
 * while(src)
 * 		*++dest = *++src;
 */
