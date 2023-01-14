#include "main.h"
/**
*_isupper - function to check if character is uppercase
*@c: 'integer c'
*Return: 1 if uppercase, 0 if lowercase
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
