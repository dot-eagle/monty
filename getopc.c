#include "monty.h"


/**
 * get_opp - Functions Structure
 * @opcode: opcode
 *
 * Return: pointer to push/pall/pint/pop/swap/add
 */

void (*get_opp(char *opcode))(stack_t **stack, unsigned int line_number)
{
	unsigned int s = 0;

	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", divide},
		{"mul", mul},
		{"mod", mod},
		{"pchar", pchar},
		{"pstr", pstr},
		{NULL, NULL}};

	while (ops[s].opcode)
	{
		if (strcmp(ops[s].opcode, opcode) == 0)
			return (ops[s].f);
		s++;
	}
	return (NULL);
}


/**
 * freeAll - free pointers
 */

void freeAll(void)
{
	stack_t *ptn = vars_t.h, *tmp = NULL;

	if (vars_t.buff)
		free(vars_t.buff);
	if (vars_t.file)
		fclose(vars_t.file);

	while (ptn)
	{
		tmp = ptn;
		ptn = ptn->next;
		free(tmp);
	}
}

