#include "./math.h"

double ceil(double x) {
	double i_val = 0;
	double frac;
	
	if(x < 0) {
		frac = modf(-x, &i_val);
		i_val = -i_val;
	} else if(x > 0) {
		frac = modf(x, &i_val);
		i_val += 1;
	}
	
	return i_val;
}

