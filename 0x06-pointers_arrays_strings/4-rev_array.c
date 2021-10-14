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
	int beg = 0;
	int end = n - 1;

	while (beg < end)
	{
		temp = a[beg];
		a[beg] = a[end];
		a[end] = temp;
		beg++;
		end--;
	}
}
