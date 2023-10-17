#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENGTH 15

int main(void)
{
    char password[LENGTH + 1];
    int i, sum, randomChar;

    srand(time(0));
    sum = 0;

    for (i = 0; sum < 2772 - 127; i++)
    {
        randomChar = rand() % 126;
        if (randomChar < 33)
            randomChar += 33;
        password[i] = randomChar;
        sum += password[i];
    }

    password[i] = 2772 - sum;
    password[i + 1] = '\0';

    printf("%s\n", password);

    return 0;
}
