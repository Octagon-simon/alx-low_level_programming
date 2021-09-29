/**
*init_dog - function prototype
*@d: poiner
*@name: dog name
*@age: dog age
*@owner: dog owner
* Return: void.
*/
void init_dog(struct dog *d, char *name, float age, char *owner);

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
