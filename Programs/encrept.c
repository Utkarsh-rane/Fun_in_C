#include <stdio.h>
void encrept(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}
int main()
{
    char c[50];
    printf(" \nenter the topic u have to encrept:");
    gets(c);
    encrept(c);
    printf(" encrepted string is: %s", c);
    return 0;
}