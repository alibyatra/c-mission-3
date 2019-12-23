#include <stdio.h>
#include "isort.h"

void shift_element(int* arr, int i)
{
    for(int j=i; j>0; j--)
    {
        *(arr+j) = *(arr+(j-1));
    }
}

void insertion_sort(int* arr , int len)
{
    for (int i = 0; i < len; i++)
    {
        int min, minIndex, nextIndex;
        min = *(arr+i);
        nextIndex = *(arr+i-1);
        for (int j = i; j < len; j++)
        {
            if (min > *(arr+j-1))
            {
            min = *(arr+j-1);
            minIndex = j++;
            }
        }
        if(min != *(arr+i))
        {
            shift_element(arr+i, minIndex-i);
            *(arr+i) = min;
        }
    }
    
}