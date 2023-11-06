#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a dog's basic information
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner's name
 *
 * Description: A structure that stores information about a dog.
 */
typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

#endif /* DOG_H */
