#include "../lists.h"

/**
 * main - Entry Point for testing
 * 
 * @argc: number of arguments
 * @argv: array of strtings
 * 
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	listint_t *head;
	listint_t *new;
	listint_t hello = {8, NULL};
	size_t n;
	int task_num = 0;

	(void)argc;
	(void)argv;
	(void)head;
	(void)new;
	(void)hello;
	(void)n;

	if (argc > 2)
	{
		printf("Error::program only accepts 1 parameter");
		return (-1);
	}

	if (argc == 2)
		task_num = atoi(argv[1]);

	switch (task_num)
	{
	case 0:
		head = &hello;
		new = malloc(sizeof(listint_t));
		if (new == NULL)
		{
			printf("Error\n");
			return (1);
		}
		new->n = 9;
		new->next = head;
		head = new;
		n = print_listint(head);
		printf("-> %lu elements\n", n);
		free(new);
		break;

	case 1:
		head = &hello;
		new = malloc(sizeof(listint_t));
		if (new == NULL)
		{
			printf("Error\n");
			return (1);
		}
		new->n = 9;
		new->next = head;
		head = new;
		n = listint_len(head);
		printf("-> %lu elements\n", n);
		free(new);
		break;

	case 2:
		head = NULL;
		add_nodeint(&head, 0);
		add_nodeint(&head, 1);
		add_nodeint(&head, 2);
		add_nodeint(&head, 3);
		add_nodeint(&head, 4);
		add_nodeint(&head, 98);
		add_nodeint(&head, 402);
		add_nodeint(&head, 1024);
		print_listint(head);
		break;

	default:
		break;
	}

	return (0);
}
