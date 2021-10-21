#include "main.h"

/**
 * _act_rec_check - check if number is prime
 *
 * @n: number to check
 * @p: potential prime number
 *
 * Return: 1 if prime, 0 if not
 */

int _act_rec_check(int n, int p)
{
	if (n < 2 || n % p == 0)
		return (0);
	else if (p > n / 2)
		return (1);
	else
		return (_act_rec_check(n, p + 1));
}

/**
 * is_prime_number - check if number is prime
 *
 * @n: number to check
 *
 * Return: 1 if the input integer is prime, Otherwise returns 0
 *
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (_act_rec_check(n, 2));
}
