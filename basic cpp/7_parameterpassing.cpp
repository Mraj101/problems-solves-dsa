#include<iostream>
using namespace std;
void swap(int a, int b)
{
   int temp;
   temp=a;
   a=b;
   b=temp;
  
}
int main(){
//call by value
int a,b;
a=10;
b=20;
swap(a,b);//a=10 and b=20
 cout<<"a is "<<a<<endl<<"b is "<<b<<endl;
return 0;
}
//call by value, 
//call by vlaue.