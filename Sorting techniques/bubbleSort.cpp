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

void BubbleSort(int arr[],int length)
{
    int i,j;
    for(i=0;i<length;i++)
    {
        for(j=0;j<length-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}


int main(){
int arr[]={5,4,3,2,1};
int length=sizeof(arr)/sizeof(int);
BubbleSort(arr,length);
printf("Sorted array is:\n");
printArray(arr,length);

return 0;
}