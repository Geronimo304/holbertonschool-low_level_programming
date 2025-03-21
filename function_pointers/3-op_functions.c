#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - suma
 * @a: num1
 * @b: num2
 * Return: retorna la suma
 */
	int op_add(int a, int b)
	{
		return (a + b);
	}
/**
 * op_sub - resta
 * @a: num1
 * @b: num2
 * Return: retorna la resta
 */
	int op_sub(int a, int b)
	{
		return (a - b);
	}
/**
 * op_mul - multiplicar
 * @a: num1
 * @b: num2
 * Return: retorna la multiplicacion
 */
	int op_mul(int a, int b)
	{
		return (a * b);
	}
/**
 * op_div - division
 * @a: num1
 * @b: num2
 * Return: retorna la division
 */
	int op_div(int a, int b)
	{
		if (b == 0)
		{
			printf("Error\n");
			exit(100);
		}
		return (a / b);
	}
/**
 * op_mod - porcentaje
 * @a: num1
 * @b: num2
 * Return: retorna el porcentaje
 */
	int op_mod(int a, int b)
	{
		if (b == 0)
		{
			printf("Error\n");
			exit(100);
		}
		return (a % b);
}
