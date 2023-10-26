#include "main.h"
/**
* factorial -  fact number
* @n: int to fact
* Return: -1 to indicate an error and  Factorial of 0 return 1 else fact
*/

int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
else
{
return (n * factorial(n - 1));
}
}
