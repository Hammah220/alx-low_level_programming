#include "main.h"
/**
*  _strncpy - function that copies a string, including
*terminating null byte, using an inputted number of bytes.
*pointed to the destination char
*@dest: buffer storing the string
*@src: source string
*@n: max nummber of bytes copied
*Return: char
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
