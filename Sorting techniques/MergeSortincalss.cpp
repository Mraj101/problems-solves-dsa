#include <stdio.h>
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void merge(int arr[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int k = low;
    int b[high + 1];
    while (i <= mid && j <= high) //while the smallest position remains smaller than the mid()
                                    //while the mid+1(j) position remains smaller than the last(high) position 
    {
        if (arr[i] > arr[j])
        {
            b[k] = arr[j];
            j++;
            k++;
        }
        else
        {
            b[k] = arr[i];
            i++;
            k++;
        }
    }
    while (i <= mid)
    {
        b[k] = arr[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        b[k] = arr[j];
        j++;
        k++;
    }
    for (i = low; i <= high; i++)
        arr[i] = b[i];
}
void mergeSort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}
int main()
{
    int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    printf("Before Sort: \n");
    printArray(arr, 10);
    mergeSort(arr, 0, 9);
    printf("After Sort: \n");
    printArray(arr, 10);
    return 0;
}