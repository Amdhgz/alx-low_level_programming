include "main.h"
/**
*main - Entry Point
*
*Description: prints _putchar using putchar proto type
*
*Return: Always 0 (success)
*/
int main(void)
	char str[] = "_putchar";
	int ch;
for (ch = 0; ch < 8; ch++)
	_putchar (str[ch]);
_putchar ('\n');
return (0);

