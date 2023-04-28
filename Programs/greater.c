#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("\n enter no 1=");
    scanf("%d",&a);
    printf("\n enter no 2=");
    scanf("%d",&b);
    printf("\n enter no 3=");
    scanf("%d",&c);
    printf("\n enter no 4=");
    scanf("%d",&d);

    if(a>=b && a>=c && a>=d)
    {
        printf("%d is the greater no",a);
    }
    else if(b>=c && b>=d && b>=a)
    {
        printf("%d is greater no",b);
    }
    else if(c>=d && c>=b && c>=a)
    {
        printf("%d is greater no",c);
    }
    else if(d>=c && d>=b && d>=a)
    {
        printf("%d is greater no",d);
    }

    return 0;
}