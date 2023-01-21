#include "monty.h"


/**
 * pop - function pop 
 * @stack: stack
 * @line_number: line number
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	if (!*stack)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number),
			freeAll(), exit(EXIT_FAILURE);
	}
	*stack = tmp->next;

	if (tmp->next != NULL)
	{
		tmp->next->prev = NULL;
	}
	free(tmp);
}

/**
 * rotr - function
 * @stack: stack
 * @line_number: line number
 */

void rotr(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}


/**
 * swap - function swap
 * @stack: stack
 * @line_number: line number
 */

void swap(stack_t **stack, unsigned int line_number)
{
	int tmp;

	if (!(*stack) || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = tmp;
}
