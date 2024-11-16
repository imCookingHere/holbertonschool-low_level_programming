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

#endif /* DOG_H */
