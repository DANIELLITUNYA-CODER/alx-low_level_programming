#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENGTH 12

int main(void)
{
    char password[LENGTH + 1];
    int i, sum, diff;

    srand(time(0));

    for (i = 0, sum = 0; sum < 2772 - 128; i++)
    {
        password[i] = rand() % 94 + 32;
        sum += password[i];
    }

    diff = 2772 - sum;
    password[i] = diff;

    password[i + 1] = '\0';

    printf("%s\n", password);

    return 0;
}
