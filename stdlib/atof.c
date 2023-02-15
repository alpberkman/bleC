#include "./stdlib.h"


double atof(const char *str) {
	return strtod(str, NULL);
}


/*
Dont use this because stoi also goes through white space
double atof(const char *str) {
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
			return d * (double) sign;
		}
	}
	
	int exp = atoi(str);
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
*/
