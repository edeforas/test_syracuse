#include "biginteger.h"
////////////////////////////////////////////////////////////////////////////////
bool is_odd(const biginteger& i)
{ return (i & 1) != 0; }
////////////////////////////////////////////////////////////////////////////////
bool is_even(const biginteger& i)
{ return (i & 1) == 0; }

////////////////////////////////////////////////////////////////////////////////
// keep only the msb bit
biginteger keep_msb(biginteger i)
{
	i = i | (i >> 1);
	i = i | (i >> 2);
	i = i | (i >> 4);
	i = i | (i >> 8);
	i = i | (i >> 16);
	i = i | (i >> 32);

	return (i >> 1) + 1;
}
////////////////////////////////////////////////////////////////////////////////