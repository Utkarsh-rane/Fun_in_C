#include <stdio.h>
float average(int a, int b, int c);
int main()
{
    int a, b, c;
    printf("\nenter value of a=");
    scanf("%d", &a);
    printf("\nenter value of b=");
    scanf("%d", &b);
    printf("\nenter value of c=");
    scanf("%d", &c);
    printf("the average of a,b,c is %f",average(a,b,c));

    return 0;
}

float average(int a, int b, int c)
{
    float result;
    result = (float)(a + b + c) / 3;
    return result;
}