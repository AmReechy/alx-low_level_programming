#ifndef DOGGY
#define DOGGY

/**
 * struct dog - INFO about a dog's name, age and owner
 * @name: First member - name of the dog
 * @age: Second member - age of the dog
 * @owner: Third member - name of dog's owner
 *
 * Description: a Long description of the structure
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
char *_strcpy(char *dest, char *src);
int calclen(char *s);

#endif
