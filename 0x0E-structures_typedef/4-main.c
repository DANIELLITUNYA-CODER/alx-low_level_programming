#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a new type struct dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the dog's owner
 *
 * Description: Longer description
 */
typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
