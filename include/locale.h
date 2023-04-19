#ifndef _LOCALE_H
#define _LOCALE_H

#define LC_ALL          6
#define LC_COLLATE      3
#define LC_CTYPE        0
#define LC_MONETARY     4
#define LC_NUMERIC      1
#define LC_TIME         2


#define LC_C          "C"
#define LC_C_USA      "en_US"


struct lconv {
    char *decimal_point;
    char *thousands_sep;
    char *grouping;
    char *mon_decimal_point;
    char *mon_thousands_sep;
    char *mon_grouping;
    char *positive_sign;
    char *negative_sign;
    char *currency_symbol;
    char frac_digits;
    char p_cs_precedes;
    char n_cs_precedes;
    char p_sep_by_space;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    char *int_curr_symbol;
    char int_frac_digits;
    char int_p_cs_precedes;
    char int_n_cs_precedes;
    char int_p_sep_by_space;
    char int_n_sep_by_space;
    char int_p_sign_posn;
    char int_n_sign_posn;
};

extern struct lconv *current_locale;


static struct lconv en_C = {
    .decimal_point = ".",
    .thousands_sep = ",",
    .grouping = "\x03\x03",
    .int_curr_symbol = "USD ",
    .currency_symbol = "$",
    .mon_decimal_point = ".",
    .mon_thousands_sep = ",",
    .mon_grouping = "\x03\x03",
    .positive_sign = "+",
    .negative_sign = "-",
    .int_frac_digits = 2,
    .frac_digits = 2,
    .p_cs_precedes = 1,
    .p_sep_by_space = 0,
    .n_cs_precedes = 1,
    .n_sep_by_space = 0,
    .p_sign_posn = 1,
    .n_sign_posn = 1,
};


char *setlocale(int category, const char *locale);
struct lconv *localeconv(void);

#endif


