#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int x = 0;
char y = 'a';
while (x < 10)
{
printf("%d", x);
x++;
};
while (y <= 'f')
{
putchar(y);
y++;
};
putchar('\n');
return (0);
}
