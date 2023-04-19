#include "./math.h"

double sqrt(double x) {
    if(x ==  0.0)
        return 0.0;

    double rt = x;
    double appro = 1;
    double prec = 0.00001;

   while(fabs(rt - appro) > prec) {
      rt = (rt + appro)/2;
      appro = x/rt;
   }

   return rt;
}
