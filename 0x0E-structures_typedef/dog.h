#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct of a simple dog
 *
 * @name: string with name of dog
 * @age: float with age of dog
 * @owner: string with name of owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * my_dog - Typedef for struct dog
 */
typedef struct dog  my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
my_dog dog_t *new_dog(char *name, float age, char *owner);

#endif
