#include <stdio.h>

int main()
{
     int marks;
    printf("\nenter your marks=");
    scanf("%d",&marks);
    switch (marks/10)
    {
    case 10:
    case 9:
    printf("\nyour grade is A"); 
    printf("congratulation");
    break;
    case 8:
    printf("\nyour grade is B"); 
    break;
    case 7:
    printf("\nyour grade is C"); 
    break;
    case 6:
    printf("\nyour grade is D"); 
    break;
    case 5:
    printf("\nyour grade is E"); 
    break;
    default:
    printf("your grade is F");
    break;
    }
    return 0;
}