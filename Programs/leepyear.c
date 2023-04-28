#include <stdio.h>

int main()
{
    int year;
    printf("\n enter the year you want to check for leap year=");
    scanf("%d", &year);
    if (year % 400 == 0)
    {
        printf("\n your entered year %d is leap year", year);
    }
    else if (year % 100 == 0)
    {
        printf("\n your entered year %d is not leap year", year);
    }
    else if (year % 4 == 0)
    {
        printf("\n your entered year %d is leap year", year);
    }
    else
    {
        printf("\n your entered year %d is not leap year", year);
    }
    return 0;
}