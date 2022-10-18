#include <unistd.h>
#include "main.h"

/**
 * _putchar the code
 *
 * description: write the value of c
 *
 * return: on successs 1
 */

int _putchar(char c)
{

	return (write(1, &c, 1));
}
