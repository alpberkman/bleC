#include "./string.h"

char *strchr(const char *str, int c){
	
	while(*str != '\0' && *str !=  (char) c){
		++str;
	}
	
	return (char *) (*str == (char) c ? str : NULL);
}
