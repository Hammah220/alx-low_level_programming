#include "function_pointers.h"
#include <stddef.h>
/**
* array_iterator - executes a function given as a parameter
* @array: input array
* @size: size of the array
* @action: pointer to the function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = -1;
if (array && action)
{
while (++i < size)
action(array[i]);
}
}
