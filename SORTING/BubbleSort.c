#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    int turn, j, temp;

    for (turn = 0; turn < n - 1; turn++)
    {
        for (j = 0; j < n - turn - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[5], i;
    int n = 5;

    printf("Enter 5 elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal Array: ");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted Array: ");
    printArray(arr, n);

    return 0;
}