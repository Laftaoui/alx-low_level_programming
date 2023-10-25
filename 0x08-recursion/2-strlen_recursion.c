#include "main.h"


/**
* _strlen_recursion -  prints lenght
* @s: string
*
*/
int _strlen_recursion(char *s)
{
int i;
for (i = 0 ; *s != '\0' ; s++ )
{
i++;
};
return (i);
}
