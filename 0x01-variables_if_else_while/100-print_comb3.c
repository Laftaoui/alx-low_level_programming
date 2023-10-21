#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i = 48;
while (i < 57)
{
int j = 49;
while (j < 58 + 48 - i)
{
putchar(i);
putchar(j + i - 48);
if (i < 56)
{
putchar(44);
putchar(32);
};
j++;
};
i++;
};
putchar('\n');
return (0);
}
