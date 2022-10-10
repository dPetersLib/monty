#include "monty.h"

/**
 * pall - prints all the values on the stack, starting from the top of the stack.
 * @stack: The stack
 * @line_number: The current file line number
 * Return: Nothing
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *node;

	(void) line_number;
	node = *stack;
	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
	}
}
