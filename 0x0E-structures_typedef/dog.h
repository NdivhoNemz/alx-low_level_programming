#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: String data member
 * @age: Integer data member
 * @owner: String member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - a new name for the type struct dog.
 */

typedef struct dog dog_t;

#endif /* DOG_H */
