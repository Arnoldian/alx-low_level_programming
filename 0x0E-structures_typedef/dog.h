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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
