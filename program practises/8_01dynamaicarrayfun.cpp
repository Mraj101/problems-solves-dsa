#include<iostream>
using namespace std;
int *fun(int n){
    int *p;
    p=(int*)malloc(n*sizeof(int));
    return (p);
}
//arrays can only be passed address in cpp or c
int main(){
    int *A;
    A=fun(5);
return 0;
}//this logic is useful sometimes
//just dynamically passing the address of array from heap