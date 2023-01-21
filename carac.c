#include "monty.h"


/**
 * _isdigit - check if integer
 * @carac: Num to validate
 *
 * Return: 0 or 1
 */

int _isdigit(int carac)
{
	int a;

	if (carac >= '0' && carac <= '9')

		a = 1;
	else
		a = 0;

	return (a);
}
