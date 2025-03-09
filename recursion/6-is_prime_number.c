#include "main.h"
#include "stdio.h"
/**
 *_is_prime_helper - Función auxiliar para verificar si n es primo.
 * @n: El número para verificar si es primo.
 * @x: El divisor actual para probar.
 * Return: 1 si n es primo, 0 si no lo es.
 */
int _is_prime_helper(int n, int x)
{
	if (x * x > n)
		return (1);
	if (n % x == 0)
		return (0);
	return (_is_prime_helper(n, x + 1));
}

/**
 * is_prime_number - Devuelve 1 si el número es primo, 0 si no lo e
 * @n: El número para verificar si es primo
 * Return: 1 si n es primo, 0 si no
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_is_prime_helper(n, 2));
}
