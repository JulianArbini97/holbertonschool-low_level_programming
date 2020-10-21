#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"
/**
 * op_add - op
 *@a: a
 * @b:b
 *Return: result
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - op
 *@a: a
 * @b:b
 *Return: result
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - op
 *@a: a
 * @b:b
 *Return: result
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - op
 *@a: a
 * @b:b
 *Return: result
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - op
 *@a: a
 * @b:b
 *Return: result
 */
int op_mod(int a, int b)
{
return (a % b);
}
