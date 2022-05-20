#include <stdio.h>
#include<bits/stdc++.h>


int main() {
	int arr[] ={1,2,5,5,4,9,9,7};
   int  length=(sizeof(arr)/sizeof(arr[0]));
	for(int i=0; i<length; i++)
 for(int j=i+1; j<length; j++) 
  if(arr[i] == arr[j])
      printf("%d ",arr[i]);
    return 0;
}
  