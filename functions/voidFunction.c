#include <stdio.h>
// function for addtion of two no.
void addtion()
{
    int n1, n2;
    printf("Enter N1:");
    scanf("%d", &n1);
    printf("\nEnter N2:");
    scanf("%d", &n2);

    int result = n1 + n2;
    printf("\naddtion: %d", result);
}

int main()
{

    // function call
    addtion();
    addtion();
    addtion();
    return 0;
}