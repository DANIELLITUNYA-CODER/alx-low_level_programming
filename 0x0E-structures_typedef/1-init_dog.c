#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a new type struct dog with the following elements
 * @name: type char pointer
 * @age: type float
 * @owner: type char pointer
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */

