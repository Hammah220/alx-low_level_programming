#include "main.h"
/**
*_strcat - concatenates string pointed to by @src to
*the end of string pointed to by @dest
*@dest: String to append
*@src: String to concatenate
*Return: void
*/
char *_strcat(char *dest, char *src)
{
int index = 0, dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; src[index]; index++)
dest[dest_len++] = src[index];
return (dest);
}
