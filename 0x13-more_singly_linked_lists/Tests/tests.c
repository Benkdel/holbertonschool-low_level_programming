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
	listint_t *node;
	listint_t hello = {8, NULL};
	size_t n;
	int n2, sum, task_num = 0;

	(void)argc;
	(void)argv;
	(void)head;
	(void)new;
	(void)node;
	(void)hello;
	(void)n;
	(void)n2;
	(void)sum;

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
		printf("Case called: %d\n", task_num);
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
		printf("Case called: %d\n", task_num);
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
		printf("Case called: %d\n", task_num);
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

	case 3:
		printf("Case called: %d\n", task_num);
		head = NULL;
		add_nodeint_end(&head, 0);
		add_nodeint_end(&head, 1);
		add_nodeint_end(&head, 2);
		add_nodeint_end(&head, 3);
		add_nodeint_end(&head, 4);
		add_nodeint_end(&head, 98);
		add_nodeint_end(&head, 402);
		add_nodeint_end(&head, 1024);
		print_listint(head);
		break;

	case 4:
		printf("Case called: %d\n", task_num);
		head = NULL;
		add_nodeint_end(&head, 0);
		add_nodeint_end(&head, 1);
		add_nodeint_end(&head, 2);
		add_nodeint_end(&head, 3);
		add_nodeint_end(&head, 4);
		add_nodeint_end(&head, 98);
		add_nodeint_end(&head, 402);
		add_nodeint_end(&head, 1024);
		print_listint(head);
		free_listint(head);
		head = NULL;
		break;

	case 5:
		head = NULL;
		add_nodeint_end(&head, 0);
		add_nodeint_end(&head, 1);
		add_nodeint_end(&head, 2);
		add_nodeint_end(&head, 3);
		add_nodeint_end(&head, 4);
		add_nodeint_end(&head, 98);
		add_nodeint_end(&head, 402);
		add_nodeint_end(&head, 1024);
		print_listint(head);
		free_listint2(&head);
		printf("%p\n", (void *)head);
		break;

	case 6:
		head = NULL;
		add_nodeint_end(&head, 0);
		add_nodeint_end(&head, 1);
		add_nodeint_end(&head, 2);
		add_nodeint_end(&head, 3);
		add_nodeint_end(&head, 4);
		add_nodeint_end(&head, 98);
		add_nodeint_end(&head, 402);
		add_nodeint_end(&head, 1024);
		print_listint(head);
		n2 = pop_listint(&head);
		printf("- %d\n", n2);
		print_listint(head);
		n2 = pop_listint(&head);
		printf("- %d\n", n2);
		print_listint(head);
		free_listint2(&head);
		printf("%p\n", (void *)head);
		break;

	case 7:
		head = NULL;
		add_nodeint_end(&head, 0);
		add_nodeint_end(&head, 1);
		add_nodeint_end(&head, 2);
		add_nodeint_end(&head, 3);
		add_nodeint_end(&head, 4);
		add_nodeint_end(&head, 98);
		add_nodeint_end(&head, 402);
		add_nodeint_end(&head, 1024);
		print_listint(head);
		node = get_nodeint_at_index(head, 5);
		printf("%d\n", node->n);
		print_listint(head);
		free_listint2(&head);
		break;

	case 8:
		head = NULL;
		add_nodeint_end(&head, 0);
		add_nodeint_end(&head, 1);
		add_nodeint_end(&head, 2);
		add_nodeint_end(&head, 3);
		add_nodeint_end(&head, 4);
		add_nodeint_end(&head, 98);
		add_nodeint_end(&head, 402);
		add_nodeint_end(&head, 1024);
		sum = sum_listint(head);
		printf("sum = %d\n", sum);
		free_listint2(&head);
		break;

	case 9:
		head = NULL;
		add_nodeint_end(&head, 0);
		add_nodeint_end(&head, 1);
		add_nodeint_end(&head, 2);
		add_nodeint_end(&head, 3);
		add_nodeint_end(&head, 4);
		add_nodeint_end(&head, 98);
		add_nodeint_end(&head, 402);
		add_nodeint_end(&head, 1024);
		print_listint(head);
		printf("-----------------\n");
		insert_nodeint_at_index(&head, 5, 4096);
		print_listint(head);
		free_listint2(&head);
		break;

	case 10:
		head = NULL;
		add_nodeint_end(&head, 0);
		add_nodeint_end(&head, 1);
		add_nodeint_end(&head, 2);
		add_nodeint_end(&head, 3);
		add_nodeint_end(&head, 4);
		add_nodeint_end(&head, 98);
		add_nodeint_end(&head, 402);
		add_nodeint_end(&head, 1024);
		print_listint(head);
		printf("-----------------\n");
		delete_nodeint_at_index(&head, 5);
		print_listint(head);
		printf("-----------------\n");
		delete_nodeint_at_index(&head, 0);
		print_listint(head);
		printf("-----------------\n");
		delete_nodeint_at_index(&head, 0);
		print_listint(head);
		printf("-----------------\n");
		delete_nodeint_at_index(&head, 0);
		print_listint(head);
		printf("-----------------\n");
		delete_nodeint_at_index(&head, 0);
		print_listint(head);
		printf("-----------------\n");
		delete_nodeint_at_index(&head, 0);
		print_listint(head);
		printf("-----------------\n");
		delete_nodeint_at_index(&head, 0);
		print_listint(head);
		printf("-----------------\n");
		delete_nodeint_at_index(&head, 0);
		printf("-----------------\n");
		delete_nodeint_at_index(&head, 0);
		printf("-----------------\n");
		delete_nodeint_at_index(&head, 0);
		printf("-----------------\n");
		delete_nodeint_at_index(&head, 0);
		printf("-----------------\n");
		delete_nodeint_at_index(&head, 0);
		printf("-----------------\n");
		delete_nodeint_at_index(&head, 0);
		printf("-----------------\n");
		delete_nodeint_at_index(&head, 0);
		printf("-----------------\n");
		delete_nodeint_at_index(&head, 0);
		printf("-----------------\n");
		delete_nodeint_at_index(&head, 0);
		printf("-----------------\n");
		delete_nodeint_at_index(&head, 0);
		print_listint(head);
		break;

	case 11:
		head = NULL;
		add_nodeint_end(&head, 0);
		add_nodeint_end(&head, 1);
		add_nodeint_end(&head, 2);
		add_nodeint_end(&head, 3);
		add_nodeint_end(&head, 4);
		add_nodeint_end(&head, 98);
		add_nodeint_end(&head, 402);
		add_nodeint_end(&head, 1024);
		print_listint(head);
		reverse_listint(&head);
		print_listint(head);
		free_listint2(&head);
		break;

	default:
		break;
	}

	return (0);
}
