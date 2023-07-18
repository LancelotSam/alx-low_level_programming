#ifndef DOG_H
#define DOG_H
/**
 * struct dog-conatins info about the dog
 * @name:dog's name
 * @age: the age of the dog
 * @Owner: the owner of the dog
 * Description: details to follow
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t-a new structure name
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
