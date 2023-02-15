#include "./stdlib.h"

int atoi(const char *str) {
	while(*str == ' ' || (*str >= 0x09 && *str <= 0x0D))
		++str;
		
	int i = 0;
		
	int sign = 1;
	if(*str == '-') {
		sign = -1;
		++str;
	} else if(*str == '+') {
		++str;
	}
	
	for(;;++str){
		if(*str >= '0' && *str <= '9') {
			i *= 10;
			i += *str - '0';
		} else {
			return i * sign;
		}
	}
}
