#include "monty.h"
/**
* free_stack - frees a doubly linked list
* @head: head of the stack
*/
void free_stack(stack_t *head)
{
	stack_t *tmp, *current;

	current = head;
	if (current == NULL)
		return;
	while (current)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
}
