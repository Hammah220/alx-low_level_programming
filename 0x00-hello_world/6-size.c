#include <stdio.h>
/**
* main - A c program that prints out sixe of the various data types.
*
*
* Return: 0
*/
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of a int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(int long));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d  byte(s)\n", sizeof(float));
	return (0);
}
