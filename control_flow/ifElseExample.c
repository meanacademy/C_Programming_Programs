#include <stdio.h>

int main()
{
    int age;
    printf("Enter Your Age:");
    scanf("%d", &age);

    if (age == 18)
    {
        printf("You are ready to vote in India");
    }

    if (age == 17)
    {
        printf("Hello, you should wait for one year to vote in India");
    }
    else if (age <= 16)
    {
        printf("You are not eligibal to vote in India");
    }
    else
    {
        printf("You are eligibal to vote in India");
    }

    // if(age >= 18){
    //     printf("You are eligibal to vote in India");
    // }else{
    //     printf("You are not eligibal to vote in India");
    // }

    // if(10<5 || 50>10){
    //     printf("Condition is true");
    // }else{
    //     printf("Condition is false");
    // }

    return 0;
}
