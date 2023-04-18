/**
 * struct dog - new type struct dog
 * @name: name of it 
 * @age: age of it
 * @owner: owner of it
 * description: dog with name, age and owner info
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog task 3
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
