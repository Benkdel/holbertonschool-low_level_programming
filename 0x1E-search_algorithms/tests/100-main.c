#include "../search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	int array[] = {
	    0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	size_t size = sizeof(array) / sizeof(array[0]);

	int array2[] = {0};
	size_t size2 = sizeof(array2) / sizeof(array2[0]);

	int array3[1];
	size_t size3 = sizeof(array3) / sizeof(array3[0]);

	int array4[] = {5, 5, 5, 5, 5, 5, 5};
	size_t size4 = sizeof(array4) / sizeof(array4[0]);

	printf("Found %d at index: %d\n\n", 6, jump_search(array, size, 6));
	printf("Found %d at index: %d\n\n", 1, jump_search(array, size, 1));
	printf("Found %d at index: %d\n\n", 999, jump_search(array, size, 999));

	printf("\n============ TESTING ARRAY2 - Only one element =============\n\n");
	printf("Found %d at index: %d\n\n", 0, jump_search(array2, size2, 0));
	printf("Found %d at index: %d\n\n", 10, jump_search(array2, size2, 10));
	
	printf("\n============ TESTING ARRAY3 - Empty array =============\n\n");
	printf("Found %d at index: %d\n\n", 0, jump_search(array3, size3, 0));
	printf("Found %d at index: %d\n\n", 10, jump_search(array3, size3, 10));

	printf("\n============ TESTING ARRAY4 - Same number always =============\n\n");
	printf("Found %d at index: %d\n\n", 0, jump_search(array4, size4, 0));
	printf("Found %d at index: %d\n\n", 5, jump_search(array4, size4, 5));
	printf("Found %d at index: %d\n\n", 10, jump_search(array4, size4, 10));

	return (EXIT_SUCCESS);
}
