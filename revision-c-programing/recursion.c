#include <stdio.h>

int sum(int n)
{
    printf("%d", n);
    if (n != 0)
    {
        return n + sum(n - 1);
    }
    return n;
}

int main()
{

    int num;
    int result;
    printf("Enter a number:");
    scanf("%d", &num);
    result = sum(num);
    printf("%d", result);
    return 0;
}
