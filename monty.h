#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/* #include <fnctl.h> */
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
/* void push(stack_t **stack, unsigned int line_number); */
void pint(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void divv(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void push(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_num);

/* free functions */
void free_stack(stack_t *top);
void free_all(char **argv);

/* tokenization strings */
size_t node_count(stack_t *head);
int empty_string(char *s, char *delimiter);
char *tokenization(char **str, const char *delimiter);
char **string_split(char *input, char *delimiter);
char **split_helper(char *input, char *delimiter);
int execute_script(FILE *value);

/* utility functins */
int _isdigit(char *s);
int _strlen(char *string);
int _strcmp(char *string1, char *string2);
char *_strcpy(char *dest, char *src);
char *_strdup(char *string);

/* error functions */
void malloc_error(void);
void unknown(char *op, int line_num);
void open_error(char *filename);

/* opcode handling & checks */
int _comment(char *op);
int  handle_opcode(stack_t  **stack, char **av, unsigned int line_number);

/* print functions */
void pchar(stack_t **stack, unsigned int line_num);
void pstr(stack_t **stack, unsigned int line_number);


#endif /* MONTY_H */
