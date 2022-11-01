#include <stdio.h>

int main()
{

    for (int i = 1; i <= 1; i++)
    {
        for (int j = 10; j >= 1; j--)
        {
            printf("%d\t%d\n", i, j);
            i++;
        }
    }

    // int i = 1;
    // int j = 10;
    // while (i <= 10)
    // {
    //     while (j >= 1)
    //     {
    //         printf("%d\t%d\n", i, j);
    //         j--;
    //         i++;
    //     }
    // }

    int i = 1;
    int j = 10;

    while (j >= 1)
    {
        printf("%d\t%d\n", i, j);
        j--;
        i++; 
    }
    return 0;
}