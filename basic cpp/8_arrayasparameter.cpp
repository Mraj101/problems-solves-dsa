#include<iostream>
using namespace std;
void fun(int A[],int n){
    //we can also use A* instead of A[]
    int i;
    for (i=0;i<n;i++){
        printf("%d ",A[i]);
    }
}
//arrays can only be passed address in cpp or c
int main(){
int A[5]={1,2,3,4,5};
fun(A,5);
return 0;
}