#include "3-calc.h"

/**
 * get_op_func - Returns a pointer to the function that corresponds to the
 *               operator given as a parameter
 * @s: The operator
 * Return: A pointer to the function that corresponds to the operator
 *         given as a parameter, or NULL if the operator is not found
 */

int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i = 0;

    while (ops[i].op != NULL)
    {
        if (*(ops[i].op) == *s)
            return (ops[i].f);
        i++;
    }

    return (NULL);
}

