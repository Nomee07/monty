#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * pint - Prints the value at the top of the stack
 * Return: void
 */
void pint(void)
{
	if (stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", stackPointer);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", stack->n);
}
