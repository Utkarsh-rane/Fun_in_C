#include <stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf(" \nenter your name:");
    // scanf("%s",str);
    gets(str);
    printf("\nhello %s",str);
    int a= strlen(str);
    printf("the lenth of ur string is%d",a);
    return 0;
}