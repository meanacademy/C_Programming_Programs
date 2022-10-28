#include <stdio.h>

int main()
{
    int num1, num2;
    int result;
    printf("Enter Two Numbers:");
    scanf("%d %d", &num1, &num2);
    printf("Entered numbers are: %d %d\n", num1, num2);

    // Arithmatic operator
    result = num1 + num2;
    printf("Addtion: %d\n", result);

    result = num1 - num2;
    printf("Substraction: %d\n", result);

    result = num1 * num2;
    printf("Multiplication: %d\n", result);

    result = num1 / num2;
    printf("Division: %d\n", result);

    result = num1 % num2;
    printf("Modulas: %d\n", result);

    // Assignment Operators
    printf("num1=num2: %d\n", num1 = num2);
    printf("num1+=num2: %d\n", num1 += num2);
    printf("num1-=num2: %d\n", num1 -= num2);
    printf("num1*=num2: %d\n", num1 *= num2);
    printf("num1/=num2: %d\n", num1 /= num2);
    printf("num1%=num2: %d\n", num1 %= num2);

    // Relational Operators
    printf("num1==num2: %d\n", num1 == num2);
    printf("num1!=num2: %d\n", num1 != num2);
    printf("num1>num2: %d\n", num1 > num2);
    printf("num1<num2: %d\n", num1 < num2);
    printf("num1>=num2: %d\n", num1 >= num2);
    printf("num1<=num2: %d\n", num1 <= num2);

    // Logical Operators
    printf("(num1 < num2) && (num2> num1), %d\n", (num1 < num2) && (num2 > num1));
    printf("(num1 < num2) || (num2> num1), %d\n", (num1 < num2) && (num2 > num1));
    printf("!(num1 < num2), %d\n", !(num1 < num2));

    return 0;
}
