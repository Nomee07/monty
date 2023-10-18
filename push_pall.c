#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * push - Pushes an element onto the stack
 * @value: Integer value to be pushed
 * Return: void
 */
void push(int value)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node  == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = stack;

	if (stack != NULL)
		stack->prev = new_node;
	stack = new_node;
}

/**
 * pall - Prints all the values on the stack
 * Return: void
 */
void pall(void)
{
	stack_t *temp = stack;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
