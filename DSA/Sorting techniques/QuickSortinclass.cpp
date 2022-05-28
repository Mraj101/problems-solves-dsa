#include <stdio.h>
void printArray(int a[], int size) //this function prints the array
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", a[i]);
    printf("\n");
}

/*returns position that is in the sorted position which devides the array
such as j will be returned which will be in the sorted position 
which we will call the partition position*/
int partition(int arr[], int low, int high)
{
    int pivot = arr[low]; //assuming the pivot in the first position 
    int i = low + 1;//initiate i from the next position of pivot
    int j = high;// j is the last position in the array
    do
    {
        while (pivot >= arr[i]) //keep increamenting i in the array unless it finds 
                                // a bigger value than pivot, stop when 
                                //arr[i]>pivot
        {
            i++;
        }
        while (pivot < arr[j])//keep decrementing j , stop when arr[j] finds
                            //smaller element than pivot
        {
            j--;
        }
        if (i < j)//now swap arr[i] with arr[j]
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);//stop when the value of i gets bigger than j


    int temp = arr[low]; //swap pivot element with arr[j]
    arr[low] = arr[j];
    arr[j] = temp;
    return j; //returning j to the function which devides the array and called a partition position
}
void QuickSort(int arr[], int low, int high)
{
    int partitionIndex; //declare variable
    if (low < high)
    {
        partitionIndex = partition(arr, low, high);//store j from partition in the partition index
        QuickSort(arr, low, partitionIndex - 1);//start recusive call from the zeroth element to the element before the partiion element
        QuickSort(arr, partitionIndex + 1, high);//recusive call from the next element after the parition element to the last element
    }
}
int main()
{
    int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};//an array declared
    printf("The input value is: \n");
    printArray(arr, 10);//calls print array
    QuickSort(arr, 0, 9);//calling quick sort function
    printf("Sorted array is: \n");
    printArray(arr, 10);//calling the printarray function again to show the sorted array
    return 0;
}