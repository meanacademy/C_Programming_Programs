#include <stdio.h>

int main()
{
    int n1, n2;
    n1 = 10;

    n2 = n1;
    printf("n2: %d", n2);

    n1 += n2; // n1 = n1+n2;
    printf("\nn1: %d, n2: %d", n1, n2);

    n1 -= n2; // n1 =n1-n2;
    printf("\nn1: %d, n2: %d", n1, n2);

    n1 *= n2; // n1 =n1*n2;
    printf("\nn1: %d, n2: %d", n1, n2);

    n1 /= n2; // n1 = n1/n2;
    printf("\nn1: %d, n2: %d", n1, n2);

    n1 %= n2; // n1 = n1%n2;
    printf("\nn1:%d, n2:%d", n1, n2);

    return 0;
}
