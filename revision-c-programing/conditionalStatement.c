// Get age from user and find he/she is eligibal for vote in india
#include <stdio.h>

int main()
{
    int age;
    printf("Enter Your Age:");
    scanf("%d", &age);

    // Check if users age is less than 18
    if (age < 18)
    {
        printf("You can not vote in india");
    }
    else if (age == 18)
    {
        printf("Yeh, you just completed with 18 years and you are attending the first vote in india");
    }
    else
    {
        printf("You may vote in india");
    }

    return 0;
}
