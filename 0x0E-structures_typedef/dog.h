#ifndef DOG
#define DOG
/**
*struct dog - defines a structure dog
*@name: name of dog
*@age: age of dog
*@owner: owner of dog
*Return: Always 0
**/
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
