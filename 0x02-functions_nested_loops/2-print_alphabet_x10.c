#include "main.h"
/**
*  print_alphabet - nly use _putchar twice in your code
*
*/
void print_alphabet_x10(void)
{
int x = 0;
while (x < 10)
{
int i = 'a';
while (i <= 'z')
{
_putchar(i);
i++;
};
_putchar('\n');
x++;
};
}
