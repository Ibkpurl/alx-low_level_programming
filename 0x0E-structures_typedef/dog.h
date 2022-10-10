#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - A new type representing dog.
 * @name: name of a dog.
 * @age: age of a dog.
 * @owner: name of a dog owner.
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

#endif
