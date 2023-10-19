#include "monty.h"

/**
 * division - divides the top two elements of the stack.
 * @head: double pointer to the head of the stack
 * @counter: line number
 * Return: no return
*/
void division(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	result = h->next->n / h->n;
	h->next->n = result;
	*head = h->next;
	free(h);
}
