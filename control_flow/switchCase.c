#include <stdio.h>

int main()
{
    int ch = 1;

    switch (ch)
    {
    case 1:
        printf("No is 1");
        break;
    case 2:
        printf("No is 2");
        break;
    case 100:
        printf("No is 100");
        break;
    default:
        printf("This is not a no");
    }

    return 0;
}
