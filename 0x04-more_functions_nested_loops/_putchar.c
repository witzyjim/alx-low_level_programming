#include "main.h"
#include <unistd.h>
/**
 * _putchar - This writes character c to stdout
 * @c: character to print
 *
 * Return: 1 upon success
 * On error, -1 is returned, and errno is set accordingly.
 */
int _putchar(char c)
{
 return (write(1, &c, 1));
}
