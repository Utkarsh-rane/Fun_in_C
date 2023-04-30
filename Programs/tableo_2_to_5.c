#include <stdio.h>
void printtable(int *multable, int num, int n)
{
    printf("the multiplication table of %d is:\n", num);
    for (int i = 0; i < n; i++)
    {
        multable[i] = num * (i + 1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%dx%d =%d\n", num, i + 1, multable[i]);
    }
    printf("************************\n\n");
}
int main()
{
    int a, b, no = 0;
    int i, c;
    printf("\n enter the value for how many table do u like to print=");
    scanf("%d", &a);
    printf("\n enter the value for upto the table do uwant to print=");
    scanf("%d", &b);

    int multable[a][b];

    do
    {
        printtable(multable[a], no, b);
        no++;
    } while (no <= a);

    return 0;
}