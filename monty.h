#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>


#define LINE_LENGTH 1024

#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

typedef stack_t *s_node;

/**
 * struct my_struct - store some data
 * @data: push value
 * @fd: file discriptor
 * Description: Structure to hold the push value
 */

 typedef struct my_struct
 {
	int data;
	FILE *fd;
	int line_num;
	s_node current;
 } my_struct;


 extern my_struct *my_node;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* stack operation functions */
int _push(stack_t **top, char *args, unsigned int line_number);
void _pint (s_node *stack, unsigned int line_number);
void unknown(char *op, int *line_num);

/* utility functins */
int _isdigit(char *s);

/* error functions */
void malloc_error(void);

/* opcode handling & checks */
int _comment(char *op);
void handle_opcode(s_node __attribute__((unused))*stack, char __attribute__((unused))*op, int __attribute__((unused))*line_num)
#endif /* MONTY_H */
