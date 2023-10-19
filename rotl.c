#include "monty.h"

/**
  *rotl - Rotates the stack to the top
  *@head: Double pointer to the head of the stack
  *@counter: Line number (unused parameter)
  *Return: no return
 */
void rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *result;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	result = (*head)->next;
	result->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = result;
}
