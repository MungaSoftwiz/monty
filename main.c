#include "monty.h"

int main(void)
{
    stack_t *stack = NULL;

    push(&stack, 1);       
    push(&stack, 2);     
    push(&stack, 3);     

	printf("values:\n");
	pall(&stack);

	return 0;
}
