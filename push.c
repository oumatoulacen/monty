#include "monty.h"
/**
 * f_push - add node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_push(stack_t **head, unsigned int counter)
{
	int n, j = 0, flag = 0;

	if (trans.arg)
	{
		if (trans.arg[0] == '-')
			j++;
		for (; trans.arg[j] != '\0'; j++)
		{
			if (trans.arg[j] > 57 || trans.arg[j] < 48)
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(trans.file);
			free(trans.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(trans.file);
		free(trans.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	n = atoi(trans.arg);
	if (trans.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}
