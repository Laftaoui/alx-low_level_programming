#include "main.h"
#include <stdio.h>
/**
* _pow_recursion -  a function returns the value of x raised to the power of y
* @x: raised to the power
* @y: power
* Return: -1 to indicate an error and  pow of 0 return 1 else pow
*/
int _pow_recursion(int x, int y)
{
if (y == 0)
return (1);
if (y < 0)
return (-1);
else
{
return (x * _pow_recursion(x, y - 1));
}
}
