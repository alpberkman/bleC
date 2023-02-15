#include "./string.h"

size_t strspn(const char *str1, const char *str2){
	
	size_t i;
	
	for(i = 0; i < strlen(str1); ++i){
		
		char found = 0;
		for(size_t j = 0; j < strlen(str2); ++j){
			if(str1[i] == str2[j]){
				found = 1;
				break;
			}
		}
		
		if(!found){
			break;
		}
	}
	
	return i;
}

