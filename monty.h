#ifndef __MONTY_H__
#define __MONTY_H__

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

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

/* Prototypes errors functions */
int error_usage(void);
int error_open(char *filename);
int error_op(char *opcode, unsigned int line_number);
int error_malloc(void);
int error_push(unsigned int line_number);
int error_pop(unsigned int line_number);
int error_swap(unsigned int line_number);
int error_add(unsigned int line_number);
int error_div(unsigned int line_number);
int error_mul(unsigned int line_number);
int error_mod(unsigned int line_number);
int error_zero(unsigned int line_number);
int error_pint(unsigned int line_number);
int error_sub(unsigned int line_number);
int error_ascii(unsigned int line_number);
int error_pchar(unsigned int line_number);

/* Prototypes for read command */
char *split_cmd(char *cmd);
typedef void (*instruction_f)(stack_t **stack, unsigned int line_number);
instruction_f check_cmd(char *str);
int get_cmd(char *filename, stack_t **stack);

/* Prototypes monty's functions */
void my_push(stack_t **stack, unsigned int line_number);
void my_pall(stack_t **stack, unsigned int line_number);
void my_pop(stack_t **stack, unsigned int line_number);
void my_swap(stack_t **stack, unsigned int line_number);
void my_add(stack_t **stack, unsigned int line_number);
void my_div(stack_t **stack, unsigned int line_number);
void my_mul(stack_t **stack, unsigned int line_number);
void my_mod(stack_t **stack, unsigned int line_number);
void my_nop(stack_t **stack, unsigned int line_number);
void my_pint(stack_t **stack, unsigned int line_number);
void my_sub(stack_t **stack, unsigned int line_number);
void my_pchar(stack_t **stack, unsigned int line_number);
void my_pstr(stack_t **stack, unsigned int line_number);
void my_rotl(stack_t **stack, unsigned int line_number);

/* Prototypes functions needed */
stack_t *add_dnodeint(stack_t **head, const int n);
int isnumber(char *arg);
void free_dlistint(stack_t *head);
int is_empty(stack_t **stack);
int _putchar(char c);

#endif /*MONTY_H*/
