#include "monty.h"

void sub(stack_t **stack, unsigned int line_number)
{
		int count = 0;
        stack_t tmp = *stack;

        while(tmp)
        {
                count++;
                tmp = tmp->next;
        }

        if (m < 2)
        {
                fprintf(stderr, "L%u: can't swap, stack too short\n", line_number)
                exit(EXIT_FAILURE);
        }

        tmp = (*stack)->next;
        tmp->n = tmp->n - (*stack)->n;

}
