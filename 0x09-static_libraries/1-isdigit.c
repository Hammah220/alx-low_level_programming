#include "main.h"
/**
*_isdigit - function to check if character is digit
*@c: 'integer c'
*Return: 1 if digit, 0 if not
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
