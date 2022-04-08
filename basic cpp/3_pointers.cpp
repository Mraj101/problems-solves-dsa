#include<iostream>
using namespace std;
int main(){
// pointers are used to accessing heap memory, pointers are also used for parameter passing
//pointers also used to store the address of a variable.

int a=10;
int *p=&a; /*can be initialized this way*/
// p=&a; can be initialized the same way
printf("value of a: %d",a);
printf("\nvalue of p is %d",p);//this is direferencing and will print the value of a
return 0;
}