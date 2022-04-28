#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int length)//shows the array elements
{
    for(int i=0;i<length;i++)
    {
        printf("%d ",arr[i]);//printing elements one by one
    }
    printf("\n");
}
//Bubblesort takes two parameters 
void BubbleSort(int arr[],int length)
{
    int i,j;
    for(i=0;i<length;i++)//loop for passed continued till n-1;
    {
        for(j=0;j<length-i-1;j++)//loop for comparision
                                //after every pass biggest element are 
                                //moved to the end
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]); //swap elements
        }
    }
}


int main(){
int arr[]={5,4,3,2,1};
int length=sizeof(arr)/sizeof(int);//determines length
printf("Input is: \n");
printArray(arr,length);
BubbleSort(arr,length);//calls bubble sort function with 2 arguments
printf("Sorted array is:\n");
printArray(arr,length);//shows the sorted array

return 0;
}