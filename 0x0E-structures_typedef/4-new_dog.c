#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog structure
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the dog's owner
 *
 * Return: Pointer to the new dog structure, or NULL if memory allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;

    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    new_dog->name = name;
    new_dog->age = age;
    new_dog->owner = owner;

    return (new_dog);
}

