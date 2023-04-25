#include <unistd.h>
/**
 * main - Entry point
 * Description: 'the character to print'
 * Return: Always 1
 * on error, -1 is returned, and error is set appropiate
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
