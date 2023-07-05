#include "main.h"
/**
 * print_chessboard-this is the main function
 *
 * It prints a chessboard
 * @a:the character to be printed
 * Return: 0 (success)
 */
void print_chessboard(char (*a)[8])
{
	int rows = 0;
	int columns = 0;

	for (rows = 0; rows < 8; rows++)
	{
		for (columns = 0; columns < 8; columns++)
		{/*if ((rows + columns) % 2 == 0){*/
			_putchar(a[rows][columns]);
		}
		_putchar('\n');
	}
}
