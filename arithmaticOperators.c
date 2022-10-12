/*
Program Name:
Date and Time:
Author:
*/
#include <stdio.h>

int main()
{
    // init two variables with numeric values
    int n1;
    int n2;
    int result;
    // Get two inputs from user
    printf("Enter First No:");
    scanf("%d", &n1);
    printf("/nEnter Second No.:");
    scanf("%d", &n2);

    // Addtion
    result = n1 + n2;
    printf("Addtion: %d", result);

    // Substraction
    result = n1 - n2;
    printf("Substraction: %d", result);

    // multiplication
    result = n1 * n2;
    printf("Multiplication: %d", result);

    // division
    result = n1 / n2;
    printf("Division: %d", result);

    // Modulas
    result = n1 % n2;
    printf("Reminder: %d", result);
    return 0;
}
