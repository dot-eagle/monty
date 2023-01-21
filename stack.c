#include "monty.h"

/**
 * pstr - function
 * @stack: stack
 * @line_number: constant int value in the structure
 */

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *runner = *stack;

	(void)line_number;

	if (!stack)
		return;
	/* is it aan empty list? */
	if (!runner)
	{
		printf("\n");
		return;
	}

	/* check if n is not null */
	while (runner->n)
	{
		printf("%c", runner->n);
		runner = runner->next;

		if (!runner || !(runner->n))
		{
			printf("\n");
			return;
		}
	}
}

/**
 * pchar - function
 * @stack: stack
 * @line_number: line number
 */

void pchar(stack_t **stack, unsigned int line_number)
{
	int n = (*stack)->n;

	if (!stack || !*stack)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (n < 0 || 127 < n)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*stack)->n);
}
