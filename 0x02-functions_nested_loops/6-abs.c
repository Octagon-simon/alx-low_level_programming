#include <stdio.h>
#include "main.h"
/**
* _abs - Computes absolute value of an integer
*
* @r: The integer to check
*
* Return: Always 0
*
*/
int _abs(int r)
{
int x;
if (r < 0)  
{  
x = ( -1 ) * r;
return (x);
}
else
{
return (r);
}
}
