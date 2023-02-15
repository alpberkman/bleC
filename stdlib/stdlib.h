#ifndef _STDLIB_H
#define _STDLIB_H


#ifndef NULL
#define NULL	0
#endif

#ifndef EXIT_FAILURE
#define EXIT_FAILURE	1
#endif

#ifndef EXIT_SUCCESS
#define EXIT_SUCCESS	0
#endif

#ifndef RAND_MAX
#define RAND_MAX	32767
#endif

#ifndef MB_CUR_MAX
#define MB_CUR_MAX	4
#endif


#ifndef _SIZE_T
#define _SIZE_T
typedef long unsigned int size_t;
#endif

#ifndef _WCHAR_T
#define _WCHAR_T
typedef unsigned int wchar_t;
#endif

#ifndef _DIV_T
#define _DIV_T
typedef struct {
	int quot;
	int rem;
} div_t;
#endif

#ifndef _LDIV_T
#define _LDIV_T
typedef struct {
	long quot;
	long rem;
} ldiv_t;
#endif


double atof(const char *str);
int atoi(const char *str);
long int atol(const char *str);
double strtod(const char *str, char **endptr);
long int strtol(const char *str, char **endptr, int base);
unsigned long int strtoul(const char *str, char **endptr, int base);

int abs(int x);
div_t div(int numer, int denom);
long int labs(long int x);
ldiv_t ldiv(long int numer, long int denom);
int rand(void);
void srand(unsigned int seed);

#endif
