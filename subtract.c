#include "monty.h"

/**
  *subtract - Subtracts the top element of the stack
  *@head: Double pointer to the head of the stack
  *@counter: Line number
  *Return: no return
 */
void subtract(stack_t **head, unsigned int counter)
{
	stack_t *result;
	int sus, nodes;

	result = *head;
	for (nodes = 0; result != NULL; nodes++)
		result = result->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	result = *head;
	sus = result->next->n - result->n;
	result->next->n = sus;
	*head = result->next;
	free(result);
}
