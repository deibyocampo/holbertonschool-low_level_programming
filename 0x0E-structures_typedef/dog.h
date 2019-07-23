#ifndef DJANGO
#define DJANGO
/**
 * struct dog - Define the following elements.
 *
 * @name: Pointer string.
 * @age: Float the age.
 * @owner: Name of owner.
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif
