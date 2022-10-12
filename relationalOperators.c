#include <stdio.h>

int main()
{
    int a = 10, b = 30, c = 30;
    int result;

    result = a == b;
    printf("a==b: %d", result);

    result = c == b;
    printf("\nc==b: %d", result);

    result = a > b;
    printf("\na>b: %d", result);
    return 0;
}
