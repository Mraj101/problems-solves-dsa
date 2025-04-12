#include<iostream>
using namespace std;
void swap(int x, int b)
{
   int temp;
   temp=x;
   x=b;
   b=temp;
  
}
//reference varaibales are used as normal variables
//init-- if int b=10  int &a=b only cpp allows this feature.
//it can not be used always
//because the machine code is monolythic but source code is procedural.
int main(){
//call by referencing
int a,b;
a=10;
b=20;
swap(a,b);//a=10 and b=20
 cout<<"a is "<<a<<endl<<"b is "<<b<<endl;
return 0;
}
//call by referencing 
//call by referencing