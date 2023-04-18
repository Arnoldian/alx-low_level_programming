/**
 * stuct dog - new type struct dog
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
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t;
