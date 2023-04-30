#include <stdio.h>
int occurence(char st[], char c)
{
    char *ptr = st;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}
int main()
{
    char st[] = "harry";
    int count = occurence(st, 'b');
    // printf("occurance=%d",count);
    if (count != 0)
    {
        printf("the charecter is present in string");
    }
    else
    {
        printf("the charecter is not present in string");
    }

    return 0;
}