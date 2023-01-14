#include "main.h"
/**
*_isalpha - checks if a character is alphabet
*@c: character to be checked
*Return: return 0 or 1
*/
int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
return (1);
return (0);
}
