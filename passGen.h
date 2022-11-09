#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int genPassword()
{
    srand(time(NULL));
    int a = rand() % (rand() % rand());
    int b = rand() % (rand() % rand());
    int c = rand() % (rand() % rand());
    int d = rand() % (rand() % rand());
    int e = rand() % (rand() % rand());
    int f = rand() % (rand() % rand());
    int g = rand() % (rand() % rand());

    int pass = (((a+b)%rand()) + ((b+c)%rand()) + ((d+e)%rand()) + ((f+g)%rand())) % rand();

    printf("\nNew Password is = %i\n", pass);
    return 0;
}