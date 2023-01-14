#include "main.h"
/**
* _strlen - finds the length of a given string
* @s: pointer to string
* Return: return length of string
*/
int _strlen(char *s)
{
int count = 0;
while (*(s + count) != 0)
{
count = count + 1;
}
return (count);
}
