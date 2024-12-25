
#include <stdio.h>

void display(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void RecursiveReverse(int arr[], int start, int end)
{
    if (start >= end)
        return;

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    RecursiveReverse(arr, start + 1, end - 1);
}


int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int len = sizeof(arr) / sizeof(arr[0]);

    printf("The Original Array is = ");
    display(arr, len);

    printf("The Reverse Array is = ");
    RecursiveReverse(arr, 0, len - 1);
    display(arr, len);

    return 0;
}
