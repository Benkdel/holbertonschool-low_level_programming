/**
 * reverse_array - reverse an array
 *
 * @a: array to be reversed
 * @n: num of elements in array
 *
 * Return: none - void function
 *
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[--n];
		a[n] = temp;
	}
}
