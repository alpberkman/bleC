#include "./stdlib.h"

static int is_valid(int base, char c) {
	if (base >= 2 && base <= 9) {
		return c >= '0' && c <= '9';
	} else if(base >= 10 && base <= 36) {
		return (c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
	} else {
		return 0;
	}
}

static int digit_to_int(char c) {
	if (c >= '0' && c <= '9') {
		return c - '0';
	} else if (c >= 'a' && c <= 'z') {
		return c - 'a' + 10;
	} else if (c >= 'A' && c <= 'Z') {
		return c - 'A' + 10;
	}
	return 0;
}

long int strtol(const char *str, char **endptr, int base) {
	if(base != 0 && (base < 2 || base > 36))
		return 0;
	while(*str == ' ' || (*str >= 0x09 && *str <= 0x0D))
		++str;
		
	long int i = 0;
		
	int sign = 1;
	if(*str == '-') {
		sign = -1;
		++str;
	} else if(*str == '+') {
		++str;
	}
	
	if(base == 0) {
		if(*str == '0' && (*(str + 1) == 'x' || *(str + 1) == 'X')) {
			base = 16;
		} else {
			base = 10;
		}
	}
	if(base == 16) {
		if(*str == '0' && (*(str + 1) == 'x' || *(str + 1) == 'X')) {
			str += 2;
		}
	}
	for(;;++str){
		if(is_valid(base, *str)) {
			i *= base;
			i += digit_to_int(*str);
		} else {
			if(endptr != NULL)
				*endptr = str;
			return i * sign;
		}
	}
		
}

