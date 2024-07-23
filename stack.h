#ifndef STACK_H__
#define STACK_H__

#include <stdlib.h>
#include <stdint.h>

typedef int stack_value_t;
struct stack_data;
struct stack_pop;
typedef struct stack_data * stack_t;
typedef struct stack_pop * stack_pop_t;

stack_t stack_push(stack_t, stack_value_t);
stack_t stack_pop(stack_t, stack_value_t *);
int stack_peek(stack_t, stack_value_t *);
void stack_free(stack_t);

#endif // STACK_H__
