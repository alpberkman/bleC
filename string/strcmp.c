#include "./string.h"

int strcmp(const char *str1, const char *str2){
	
	size_t i = 0;
	while(str1[i] == str2[i] && str1[i] != '\0'){
		++i;
	}
	
	return str2[i] ? str1[i] - str2[i] : 0;
}
