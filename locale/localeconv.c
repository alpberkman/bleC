#include "./locale.h"

struct lconv *localeconv(void) {
	static struct lconv *current_locale = &en_C;
    return current_locale;
}
