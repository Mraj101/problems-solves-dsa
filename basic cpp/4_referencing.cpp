#include<iostream>
using namespace std;
int main(){
 //reference feature is available in only cpp
 int a=10;
 int &reference=a;//must be initialized when declared
 cout<<reference<<endl;//shows output 10
 cout<<a<<endl;//output 10
 cout<<&reference<<endl;//hex address
 cout<<&a<<endl;//hex adress
return 0;
}//when we will be parameter passing we can use this thing.