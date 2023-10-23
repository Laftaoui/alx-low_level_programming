#include "main.h"
/**
* _islower - function that checks for lowercase character
*
* 0c: checks input of fonction
*
* Return : Returns 1 if 'c' is lowercase 0 otherwise (success)
*
*/
int _islower(int c)
{
if (c <= 'a' || c >= 'z')
return (0);
else
return (1);
}
