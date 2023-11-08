#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/* Function that prints a name */
void print_name(char *name, void (*f)(char *));

/* Function that executes a function on each element of an array */
void array_iterator(int *array, size_t size, void (*action)(int));

/* Function that searches for an integer */
int int_index(int *array, int size, int (*cmp)(int));

/* Struct op */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

/* Function prototypes for the operation functions */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/* Function that selects the correct function to perform the operation */
int (*get_op_func(char *s))(int, int);

#endif /* FUNCTION_POINTERS_H */

