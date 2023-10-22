#include <stdio.h>
#include "main.h"
/**
* main - write putchar
*
* Return: Always 0 (Success)
*/
void print_alphabet()
{
char x = 'a';
while (x <= 'z')
{
putchar(x);
x++;
};
putchar('\n');
}
int main()
{
print_alphabet(void);
return (0);
}
