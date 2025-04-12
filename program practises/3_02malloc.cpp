#include<iostream>
#include<stdlib.h>//to use malloc this library is required
using namespace std;
int main(){
int *p;
// in c language the function name is malloc,to store a varibale in heap memory
p=(int*)malloc(5*sizeof(int));//this initialization is in c
p=new int[5];//this initialization is in cpp
return 0;
}