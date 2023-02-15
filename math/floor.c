#include "./math.h"

double floor(double x) {
	double i_val = 0;
	double frac;
	
	if(x < 0) {
		frac = modf(-x, &i_val);
		i_val = -i_val + (frac == 0 ? 0 : -1);
	} else if(x > 0) {
		frac = modf(x, &i_val);
	}
	
	return i_val;
}
