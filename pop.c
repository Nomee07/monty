#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * pop - Removes the top element of the stack
 * Return: void
 */
void pop(void)
{
	stack_t *temp = stack;

	if (stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", stackPointer);
		exit(EXIT_FAILURE);
	}

	stack = stack->next;
	free(temp);
}
