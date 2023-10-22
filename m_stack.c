#include "monty.h"
/**
* free_stack - frees a doubly linked list
* @head: head of the stack
*/
void free_stack(stack_t *head)
{
	stack_t *repl;

	repl = head;
	while (head)
	{
		repl = head->next;
		free(head);
		head = repl;
	}
}
