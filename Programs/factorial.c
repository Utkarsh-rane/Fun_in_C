#include <stdio.h>

int main()
{
    int a=0,n=99,factorial=1;
    for(a=1;a<=n;a++)
    {
        factorial*=a;
    }
    printf(" the value of factorial %d is %d", n, factorial);
    return 0;
}