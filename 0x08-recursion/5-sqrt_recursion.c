#include "main.h"
#include <stdio.h>
/**
* _sqrt_recursion -  returns the natural square root of a number
*
* _sqrt_re - fct calculat square
*
* @n: raised to the power
* @i: power
* _sqrt_re - fct calculat square
* Return: -1 to indicate an error and  return sqrt
*/

int _sqrt_re(int n, int i)
{
if ((i <= n) && (i * i != n))
return (_sqrt_re(n, i + 1));
else if ((i <= n) && (i * i == n))
return (i);
else
return (-1);
}
int _sqrt_recursion(int n)
{
return (_sqrt_re(n, 0));
}
