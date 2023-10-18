#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * add - Adds the top two elemnts of the stack
 * Return: void
 */
void add(void)
{
	if (stack == NULL || stack->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", stackPointer);
		exit(EXIT_FAILURE);
	}
	stack->next->n += stack->n;
	pop();
}
