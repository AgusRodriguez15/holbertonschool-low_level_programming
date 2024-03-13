#include "function_pointers.h"
/**
 * print_elem - prints an integer
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	 size_t a;

	 for (a = 0; a < size; a++)
		 action(array[a]);

}
