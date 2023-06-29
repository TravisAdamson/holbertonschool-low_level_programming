/**
 * get_op_func - Find which function to use
 * @s: Indicator for what function to use
 *
 * Return: Pointer to the function to be used
 */
int (*get_op_func(char *s))(int, int)
{
	opt_t ops[] = {
		{'+', op_add},
		{'-', op_sub},
		{'*', op_mul},
		{'/', op_div},
		{'%', op_mod},
		{NULL, NULL}
	};
	int i;

	while (i <= 5)
	{
		if (*ops[i].op == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
