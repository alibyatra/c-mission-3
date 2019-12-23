#include <stdio.h>
#include "isort.h"
#define length 50

int main()
{
int arr [length] = {0};
    for(int i=0; i<length; i++)
    {
        scanf(" %d", (arr+i));
    }
    insertion_sort(arr, length);
    for(int j=0; j<=length-1; j++)
        printf("%d,", arr[j]);
    printf("\n");
}