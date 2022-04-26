#include<bits/stdc++.h>
using namespace std;

//the function will print any array
void PrintArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}


//Sorting is done here
void SelectionSort(int arr[],int n)
{
    int i;
    int j;//variable for moving the indexes
    int k;//variable for storing the position of minimum number
    for(i=0;i<n-1;i++)
    {
        for( j=k=i;j<n;j++)
        {
            if(arr[j]<arr[k])
                k=j;
                
        }
        swap(arr[i],arr[k]);
    }

}

//main function
int main(){
int arr[]={10,9,8,7,6,5,4,3,2,1};
int length=sizeof(arr)/sizeof(int); //calculating the length of array
PrintArray(arr,length); //calling the printarray function
SelectionSort(arr,length);
PrintArray(arr,length); //calling the printarray function

return 0;
} 