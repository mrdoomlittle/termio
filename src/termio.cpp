# include "termio.hpp"

void mdl::debug_print(bool __lock_print, char const *__debug_msg, ...) {
	if (!__lock_print) {
		va_list argptr;
    	va_start(argptr, __debug_msg);

		vfprintf(stderr, __debug_msg, argptr);

    	va_end(argptr);
	}
}
