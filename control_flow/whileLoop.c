#include <stdio.h>

int main()
{
    int i;
    printf("Enter age:");
    scanf("%d", &i);

    while(i == 18){
        printf("You may vote in India");
        // i++;
        // break;
    }

    // for (int a = 0; a < 10; a++)
    // {
    //     // if(a>=6){
    //     //     break;
    //     // }
    //     // printf("%d", a);

    //     if (a <= 5)
    //     {
    //         printf("%d", a);
    //     }
    // }

    return 0;
}
