#include "main.h"
/**
 *  * print_alphabet_x10 - prints 10 times the alphabet, in lower
 *   * Return : Always return 0
 */
void print_alphabet_x10(void)
{
	char character;
	int increase;

	increase = 0;

	while (increase < 10)
	{
		character = 'a';
		while (character <= 'z')
		{
			_putchar(character);
			character++;
		}
		_putchar('\n');
		increase++;
	}
}
