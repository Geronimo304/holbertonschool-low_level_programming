#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - suma
 * op_sub - resta
 * op_mul - multiplica
 * op_div - divide
 * op_mod - resto de la division
 * @a: num1
 * @b: num2
 * Return: retorna la cuenta
 */
	int op_add(int a, int b)
	{
		return(a + b);
	}
	int op_sub(int a, int b)
	{
		return(a - b);
	}
	int op_mul(int a, int b)
	{
		return(a * b);
	}	
	int op_div(int a, int b)
	{
		if (b == 0)
		{
			printf("Error\n");
			exit(100);
		}
		return(a / b);
	}
	int op_mod(int a, int b)
	{
		if (b == 0)
		{
			printf("Error\n");
			exit(98);
		}
		return(a % b);
}
