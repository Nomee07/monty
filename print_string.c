#include "monty.h"

/**
 * print_string - Prints the string starting at the top of the stack,
 * followed by a new
 * @head: Double pointer to the head of the stack
 * @counter: Line number (unused parameter)
 * Return: no return
*/
void print_string(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
