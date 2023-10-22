#include "monty.h"
/**
 * f_add - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int count = 0, repl;

	h = *head;
	while (h)
	{
		h = h->next;
		count++;
	}
	if (count < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	repl = h->n + h->next->n;
	h->next->n = repl;
	*head = h->next;
	free(h);
}
