#include "./stdlib.h"

double strtod(const char *str, char **endptr) {
	double d = 0.0;
		
	int sign = 1;
	if(*str == '-') {
		sign = -1;
		++str;
	} else if(*str == '+') {
		++str;
	}
		
	for(;;++str){
		if(*str == '.') {
			++str;
			break;
		} else if(*str == 'e' || *str == 'E') {
			break;
		} else if(*str >= '0' && *str <= '9') {
			d *= 10.0;
			d += *str - '0';
		} else {
			if(endptr != NULL)
				*endptr = str;
			return d * (double) sign;
		}
	}
	
	double mul = 1;
	for(;;++str){
		if(*str == 'e' || *str == 'E') {
			++str;
			break;
		} else if(*str >= '0' && *str <= '9') {
			mul *= 0.1;
			d += mul * (*str - '0');
		} else {
			if(endptr != NULL)
				*endptr = str;
			return d * (double) sign;
		}
	}
	
	int exp = 0;	
	int exp_sign = 1;
	if(*str == '-') {
		exp_sign = -1;
		++str;
	} else if(*str == '+') {
		++str;
	}
	
	for(;;++str){
		if(*str >= '0' && *str <= '9') {
			exp *= 10;
			exp += *str - '0';
		} else {
			if(endptr != NULL)
				*endptr = str;
			exp *= exp_sign;
			break;
		}
	}

	if(exp > 0) {
		while(exp > 0){
			d *= 10;
			--exp;
		}
	} else if(exp < 0) {
		while(exp < 0){
			d *= 0.1;
			++exp;
		}
	}
	
	return d * (double) sign;
}
