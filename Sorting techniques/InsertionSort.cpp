#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int length)
{
    for(int i=0;i<length;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void InsertionSort(int arr[],int length)
{
    int i,j,temp;
    for(i=1;i<length;i++)
    {
        temp=arr[i];
        for(j=i-1;j>=0 && temp<arr[j];j--)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=temp;
    }
}

int main(){
  
  int arr[]={10,9,8,7,6,5,4,3,2,1};
  int length=sizeof(arr)/sizeof(int);
InsertionSort(arr,length);
printArray(arr,length);
  return 0;
}