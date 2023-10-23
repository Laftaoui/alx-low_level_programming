#include "main.h"
/**
*  _islower checks for lowercase character - returns 1 if c is lowercase - return 0 otherwise
*
*/
int _islower(int c)
{
int x;
if (c <= 'a' || c >= 'z')
x = 1;
else
x = 0;
return (x);
}
