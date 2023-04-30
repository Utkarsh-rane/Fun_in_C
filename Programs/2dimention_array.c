#include <stdio.h>

int main()
{
         int a,b;
       printf("\n enter the value for create arrey=");
       scanf("%d" ,&a);
       printf("\n enter the value for create arrey=");
       scanf("%d" ,&b);
    // int a = 3;
    // int b = 5;
    int display[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("\n enter the value for display[%d] [%d] : ", i + 1, j + 1);
            scanf("%d", &display[i][j]);
        }
    }
    printf("two dimentional array is:\n ");

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf(" %d ",display[i][j]);
            if (j==b-1)
            {
                printf("\n ");
            }
        }
    }
    return 0;
}