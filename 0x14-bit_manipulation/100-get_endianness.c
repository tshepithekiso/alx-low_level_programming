#include "main.h"

/**
 * get_endianness - check if a machine is endian
 * Return 1 for sucess, -1 for failure
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
