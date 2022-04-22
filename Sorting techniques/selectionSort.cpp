#include<bits/stdc++.h>
using namespace std;

//the function will print any array
void PrintArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}


//Sorting is done here
void SelectionSort(int arr[],int n)
{
    int i=0;
    int temp=arr[i];
    for(i=0;i<n-1;i++)
    {
        
    }

}

//main function
int main(){
int arr[]={10,9,8,7,6,5,4,3,2,1};
int length=sizeof(arr)/sizeof(int); //calculating the length of array
PrintArray(arr,length); //calling the printarray function

return 0;
}