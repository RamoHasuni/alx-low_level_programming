#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    int lastDigit = abs(n) % 10;

    printf("The last digit of %d is %d.\n", n, lastDigit);

    return 0;
}
