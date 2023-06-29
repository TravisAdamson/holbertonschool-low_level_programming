#ifndef CALC_H
#define CALC_H

/**
 * struct op - Struct op 
 * @op: The operator
 * @f: The function to be used
 *
 * description - Uses a given function to do a given thing
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
};

typedef struct op op_t;
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s)(int, int);

#endif
