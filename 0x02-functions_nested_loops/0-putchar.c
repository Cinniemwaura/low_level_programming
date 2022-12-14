#include "main.h"
/**
 * main - prints _putchar, followed by a new line.
 *
 * Return: 0 Success
 */
int main(void)
{
	char *c = "_putchar\n";
	while (*c)
	{
	putchar(*c);
	c++;
	}
	return (0);
}
