#include "main.h"
/**
*_strspn - gets the length of prefix substring
*@s: initial segment
*@accept: bytes accepted
*Return: number of accepted bytes
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, bool;
for (i = 0; *(s + i) != '\0'; i++)
{
bool = 1;
for (j = 0; *(accept + j) != '\0'; j++)
{
if (*(s + i) == *(accept + j))
{
bool = 0;
break;
}
}
if (bool == 1)
break;
}
return (i);
}
