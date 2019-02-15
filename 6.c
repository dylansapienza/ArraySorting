#include <stdio.h>
#include <stdlib.h>

int arr[5];
int i;

void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}
int main()
{
    printf("Enter Numbers for Array: \n");
    for(i=0;i<=4;i++){
        scanf("%d",&arr[i]);
    }
    insertionSort(arr,5);
    printf("Sorted Array: ");
    for(i=0;i<=4;i++){
        printf(" %d",arr[i]);
    }
    return 0;
}
