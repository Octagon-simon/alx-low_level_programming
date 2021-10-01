#ifndef VARIADICSHIELD
#define VARIADICSHIELD
/** PUTCHAR **/
int _putchar(char c)
{
return (write(1, &c, 1));
}
int sum_them_all(const unsigned int n, ...);
#endif
