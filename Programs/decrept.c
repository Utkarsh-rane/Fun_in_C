#include <stdio.h>
void decrept(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}
int main()
{
    char c[50];
    printf(" \nenter the encrepted msg :");
    gets(c);
    decrept(c);
    printf(" decrepted message  is: %s", c);
    return 0;
}