#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

void free_stack(stack_t *head);

/**
 * add - Adds the top two elemnts of the stack
 * @head: Head of the stack
 * @counter: Line number
 * Return: Nothing
 */
void add(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, result;

	h = *head;

	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		exit(EXIT_FAILURE);
	}
	h = *head;
	result = h->n + h->next->n;

	h->next->n = result;
	*head = h->next;
	free(h);
}
