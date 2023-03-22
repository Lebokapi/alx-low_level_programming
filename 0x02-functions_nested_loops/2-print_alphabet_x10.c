#include "main.h"
/**
 * Print alphabet x 10 - Prints alphabet x10
 *
 * Return  always 0
 */

main(void) print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; i++)
			_putchar  (j);
		_putchar('\n');
	}


}
