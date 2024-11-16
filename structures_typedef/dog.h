#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure to represent a dog.
 * @name: The name of the dog (a pointer to a string).
 * @age: The age of the dog (a float).
 * @owner: The owner's name (a pointer to a string).
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Define a new type dog_t as an alias for struct dog */
typedef struct dog dog_t;

/* Function prototype for init_dog */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
