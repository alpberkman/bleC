#include "./string.h"

size_t strcspn(const char *str1, const char *str2){
	
	size_t i;
	for(i = 0; str1[i] != '\0'; ++i){
		for(size_t j = 0; str2[j] != '\0'; ++j){
			if(str1[i] == str2[j]){
				return i;
			}
		}
	}
	
	return i;
}
