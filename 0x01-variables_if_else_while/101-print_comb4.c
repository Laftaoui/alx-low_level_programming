#include <stdio.h>
/**
* main - Print 3 num
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i = 48;
while (i < 58)
{
int j = i + 1;
while (j < 58)
{
int s = j + 1;
while (s < 58)
{
putchar(i);
putchar(j);
putchar(s);
if (i < 55)
{
putchar(44);
putchar(32);
};
s += 1;
};
j += 1;
};
i++;
};
putchar('\n');
return (0);
}
