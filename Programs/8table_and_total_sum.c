#include <stdio.h>

int main()
{
    int i ,sum=0;
    
    for(i=1;i<=10;i++)
    {
    printf("8*%d=%d\n",i,i*8);
    sum +=i*8;
    }
    printf("the sum of  no is%d",sum);
    return 0;
}