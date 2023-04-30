#include <stdio.h>
int positive(int *arr, int n)
{
    int pcount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            pcount++;
    }
    return pcount;
}
int negativearr(int *arr, int n)
{
    int ncount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            ncount++;
    }
    return ncount;
}

int main()
{
    int i;
    int arr[] = {12, -1, 23, -34, 2, 45, 5, -7};
    printf("values in array =");
    for(i=0;i<8;i++){
    printf("%d ", arr[i]);
    }
    printf("\ncount of positive numbers in array =%d\n", positive(arr, 8));
    printf("count of negative numbers in array =%d\n", negativearr(arr, 8));
    return 0;
}