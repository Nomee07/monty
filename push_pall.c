#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

void addqueue(stack_t **head, int value);

/**
 * push - Pushes an element onto the stack
 * @head: Head of the stack
 * @counter: Line number
 * Return: Nothing
 */
void push(stack_t **head, unsigned int counter)
{
	int n, j = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	n = atoi(bus.arg);

	if (bus.lifi == 0)
		addnode(head, n);
	else
	addqueue(head, n);
}

/**
 * pall - Prints all the values on the stack
 * @head: Head of the stack
 * @counter: Not used
 * Return: Nothing
 */
void pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void) counter;

	h = *head;

	if (h == NULL)
		return;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
