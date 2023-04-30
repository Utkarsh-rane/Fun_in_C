#include <stdio.h>
void printarry(int ptr[], int n){
    for(int i=0; i<n; i++){
    printf("the value element %d is %d\n", i+1 ,ptr[i]);
    }
    ptr[2]=21;
}
int main()
{
    int arr[] = {1,2,434,432,543};
    printarry(arr, 5);
    printf("%d",arr[2]);
    return 0;
}