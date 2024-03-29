#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Struct to define a dog
 * @name: name of dog
 * @owner: name's owner of dog
 * @age: years old
 *
 * Description: Structure dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

int _putchar(char c);

#endif
