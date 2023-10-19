#include "monty.h"

/**
 * rotr - Rotates the stack to the bottom
 * @head: Double pointer to the head of the stack
 * @counter: Line number (unused parameter)
 */
void rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy;

	copy = *head;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
