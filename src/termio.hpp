# ifndef __termio__hpp
# define __termio__hpp
# include <cstdio>
# include <stdarg.h>

namespace mdl {
	void debug_print(bool __lock_print, char const *__debug_msg, ...);
	//void error_print(echar_t const *__error_msg, ...);
}

# endif /*__termio__hpp*/
