#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int pos;
int arr[]={5,4,3,2,1};
int size=sizeof(arr)/sizeof(int);
printf("Which pos you want to insert value? \n");
scanf("%d",&pos);
for(int i=size-1;i<=pos;i--)
{
    arr[i-1]=arr[i];
}
// arr[pos-1]=12;
 
printArray(arr,size);
return 0;
}