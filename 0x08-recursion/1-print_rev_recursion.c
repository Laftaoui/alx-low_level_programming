#include "main.h"
#include <stdio.h>
/**
* _print_rev_recursion -  returns rev of string
* @s: char
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
putchar('\n');
else
_print_rev_recursion(s + 1);
putchar(*s);
}
