#include <stdio.h>

int main()
{
   int mul[10];
   int n;
        printf("\n enter the value for table=");
       scanf("%d" ,&n);
   for (int i=0; i<10; i++)
   {
     mul[i]=n*(i+1);

   }
  for (int i=0; i<10; i++)
{
  printf("\n%d*%d=%d",n,i+1,mul[i]);
}
    return 0;
}