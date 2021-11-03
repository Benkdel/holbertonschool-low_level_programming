#ifndef CALC_H
#define CALC_H

/**
 * Prototypes of operation functions
 *
 */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * Other prototypes - helpers
 *
 */
int (*get_op_func(char *s))(int, int);

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 * @a: number 1
 * @b: number 2
 */
struct op
{
	char *op;
	int (*f)(int a, int b);
};

/**
 * typedef for struct op
 */
typedef struct op op_t;

#endif
