#include "monty.h"


/**
 * getinfo - get info from buff
 * @val: input val
 * @buf: buffer with the line
 * @opcode: opeational code
 *
 * Return: 0 succes, 1 failed
 */

int getinfo(char *buf, char *opcode, int *val)
{
	char *buf_val = NULL;

	*val = 0; /* reset val */

	if (!buf || !opcode || !val)
	{
		return (1);
	}

	while (*buf == ' ')
	{
		buf++;
	}
	opcode = strcpy(opcode, buf);
	opcode = strtok(opcode, " ");
	buf_val = strtok(NULL, " ");

	if (buf_val)
	{
		*val = atoi(buf_val);
	}
	return (0);
}
