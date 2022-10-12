#include <stdio.h>

int main()
{
    int ch;
    printf("1 - Marathi\n");
    printf("2 - Hindi\n");
    printf("3 - Engliish\n");
    printf("Enter your Choice:");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("Your selected lang is Marathi");
        break;
    case 2:
        printf("Your selected lang is Hindi");
        break;
    case 3:
        printf("Your selected lang is English");
        break;
    default:
        printf("Lang Not Found");
    }

    return 0;
}
