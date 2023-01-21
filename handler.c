#include "monty.h"


/**
 * pall - print all
 * @stack: stack
 * @line_number: line number
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	(void)line_number;

	if (!tmp)
		return;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}

/**
 * pint - print stack
 * @stack: value top of stack
 * @line_number: constant int value in the structure
 */

void pint(stack_t **stack, unsigned int line_number)
{
	/* check if stack is valid or if stack is empty */
	if (!stack || !*stack)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
