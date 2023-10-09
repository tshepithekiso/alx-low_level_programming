#ifndef DOG_HEADER_
#define DOG_HEADER_

/**
 * struct dog - dog elements
 * @name: name of te dog
 * @age: age of the dog
 * @owner: owner of te dog
 *
 * Description: features of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - types of dogs
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
