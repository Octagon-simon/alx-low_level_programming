#include "main.h"
#include <stdio.h>
/**
 * swap_int - Swap values of the parameters passed  
 * 
 * @a : The first parameter
 * 
 * @b : The first parameter
 * 
 */

void swap_int(int *a, int *b)
{
int c, d;
c = *a;
d = *b;
/**SWAP**/
*a = d;
*b = c;
}
