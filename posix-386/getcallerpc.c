#include "u.h"
#include "libc.h"

uintptr
getcallerpc(void *a) __attribute__((no_sanitize("address")))
{
	return ((uintptr*)a)[-1];
}
