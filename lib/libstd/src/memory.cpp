#include "memory.h"

namespace std													{
// ——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// ———————————————————————————————————————————————————————————————————————————————————— memory
// ——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
// ——————————————————————————————————————————————————————————————
// ————————————— memset
// —————————————	set bytes in memory
// ——————————————————————————————————————————————————————————————
void * memset													(
	void *						dst								, // pointer to the object to fill
	char						data							, // fill byte
	size_t						len								  // number of bytes to fill
)																{
	size_t						dstp			  = (size_t) dst;
	if (len >= sizeof(size_t))									{
		size_t					data_pack						;
		for (int i = 0; i < sizeof(size_t); i++)
			((char *) data_pack)[i] = data						;
		while (len >= sizeof(size_t))							{
			((size_t *) dstp)[0] = data_pack					;
			dstp			 += sizeof(size_t)					;
			len				 -= sizeof(size_t)					;
		}
	}
	while (len % sizeof(size_t) != 0)							{
		((char *) dstp)[0]	  =	data							;
		dstp				 +=	1								;
		len					 -=	1								;
	}
	return dst													;
}
// ——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
} // namespace std