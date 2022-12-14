/**
 * pall - function the prints the stack
 * @stack: the top of stack
 * @line_number: the line number
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *head;
	(void)line_number;

	print = *stack;
	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
}
/**
 * push - adds to the top of the stack
 * @stack: the top of stack
 * @line_number: the token line number
 * @n: integer
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number, int n)
{
	stack_t *new_elem;

	if (stack == NULL)
	{
		fprintf(stderr, "L%d: unknown stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	new_elem = malloc(sizeof(stack_t));
	if (new_elem == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_elem->n = variables.temp;
	new_elem->prev = NULL;
	new_elem->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = new_elem;
	*stack = new_elem;
}
