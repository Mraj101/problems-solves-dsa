#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int length) //shows the array in the console
{
    for(int i=0;i<length;i++)
    {
        printf("%d ",arr[i]); //printing array elements one by one.
    }
    printf("\n");
}

void InsertionSort(int arr[],int length)
{
    int i,j,temp;
    for(i=1;i<length;i++)//index element is taken at position 1 instead of 0
    {
        temp=arr[i];
        for(j=i-1;j>=0 && temp<arr[j];j--)//compares index to the previosu element
                                         //shift elements as long as a[j]>temp
        {
            arr[j+1]=arr[j]; //shifting elements right
        }
        arr[j+1]=temp; //inserting the index element
    }
}

int main(){
  
  int arr[]={10,9,8,7,6,5,4,3,2,1};
  int length=sizeof(arr)/sizeof(int);//determines lengh
printf("Input array is: \n");
printArray(arr,length);//showing the input array elements
InsertionSort(arr,length);//calling InsertionSort function
printf("Sorted array is: \n");
printArray(arr,length);//showing the sorted array
  return 0;
}