#include "main.h"

/**
 * _islower - This checks if char is lowercase
 * @c: is the char to be checked
 * Return: 1 if char is a lowercase, else is 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

