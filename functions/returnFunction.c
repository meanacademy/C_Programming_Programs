#include <stdio.h>
// function for addtion of two no.
int addtion()
{
    int n1, n2;
    printf("Enter N1:");
    scanf("%d", &n1);
    printf("\nEnter N2:");
    scanf("%d", &n2);

    int result = n1 + n2;
    return result;
}

int main()
{

    // function call
    //  int res1 = addtion();
    //  int res2 = addtion();
    //  int res3 = addtion();
    printf("%d", addtion());
    return 0;
}