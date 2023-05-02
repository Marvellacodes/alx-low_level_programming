#include <stdio.h>

/**
* swap_int - Swaps the valus of two integars.
* @a: The first integar to be swappped
* @b: The second integar to be swapped
*
* Return: nothing
*/

void swap_int(int *a, int *b)
/* the function that swaps the values of two integars. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
