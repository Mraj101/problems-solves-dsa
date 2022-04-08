#include<iostream>
using namespace std;
void swap(int *x, int *y)
{
   int temp;
    temp=*x;
    *x=*y;
    *y=temp;
  
}
int main(){
//call by address
int a,b;
a=10;
b=20;
swap(&a,&b);//a=10 and b=20
 cout<<"a is "<<a<<endl<<"b is "<<b<<endl;
return 0;
}
//call by address 
//call by address