#include "monty.h"

/**
 * push - stack function
 * @stack: stack
 * @line_number: line number
 */

void push(stack_t **stack, unsigned int line_number)
{
	char *num = NULL;
	stack_t *tmp = NULL;
	unsigned int i, neg;

	neg = 1;
	i = 0;
	num = strtok(NULL, " \t\n");

	if (!num)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number), freeAll();
		exit(EXIT_FAILURE);
	}
	/* check if num is negative*/
	if (num[0] == '-')
	{
		neg = -1;
		num++;
	}
	while (num[i] != '\000' && num[i] != '\n')
	{
		if (_isdigit(num[i]) == 0)
		{
			fprintf(stderr, "L%u: usage: push integer\n", line_number),
				freeAll(), exit(EXIT_FAILURE);
		}
		i++;
	}
	tmp = malloc(sizeof(stack_t));
	if (!tmp)
	{
		fprintf(stderr, "Error: malloc failed\n"), freeAll();
		exit(EXIT_FAILURE);
	}
	tmp->n = neg * atoi(num);
	tmp->next = NULL;
	if (!*stack)
		tmp->prev = NULL, *stack = tmp;
	else
		tmp->next = *stack, (*stack)->prev = tmp, *stack = tmp;
}


/**
 * rotl - functiona
 * @stack: stack
 * @line_number: line number
 */

void rotl(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
