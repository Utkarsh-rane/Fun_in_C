#include <stdio.h>
void reverse(int *arr, int n)
{
    int tmpo;
    for (int i = 0; i < (n / 2); i++)
    {
        tmpo = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = tmpo;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    reverse(arr, 7);
    for (int i = 0; i < 7; i++)
    {
        printf("the value of %d is: %d\n", i, arr[i]);
    }
    return 0;
}