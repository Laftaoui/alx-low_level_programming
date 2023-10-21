#include <stdio.h>
/**                                                                                                                   
* main - print_alphabet                                                                                               
*                                                                                                                     
* Return: Always 0 (Success)                                                                                          
*/
int main(void)
{
char x = 'a';
char y = 'A';
while (x <= 'z')
{
putchar(x);
x++;
};
while (y <= 'Z')
{
putchar(x);
x++;
};
putchar('\n');
return (0);
}
