#include <stdio.h>
#include "monty.h"

/**
 * swap - Swaps the top two elements of the stack
 * Return: void
 */
void swap(void)
{
	int temp = stack->n;

	if (stack == NULL || stack->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", stackPointer);
		exit(EXIT_FAILURE);
	}

	stack->n = stack->next->n;
	stack->next->n = temp;
}
