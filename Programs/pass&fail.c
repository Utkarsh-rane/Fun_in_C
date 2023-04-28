#include <stdio.h>

int main()
{
    int math, marathi, science;
    float total;

    printf("\n enter math marks=");
    scanf("%d", &math);
    printf("\n enter marathi marks=");
    scanf("%d", &marathi);
    printf("\n enter science marks=");
    scanf("%d", &science);
    total = (math + marathi + science) / 3;

    if ((total < 40) || (math < 33) || (marathi < 33) || (science < 33))
    {
        printf("your percentage is %f hence you are fail", total);
    }
    else
    {
        printf("your percentage is %f you are pass", total);
    }

    return 0;
}