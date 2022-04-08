#include<iostream>
using namespace std;
struct Rectangle{
 int length;
 int breadth;
};
int main(){
   struct Rectangle r={10,5};
   struct Rectangle *p=&r;
   r.length=20;
   cout<<r.length<<endl;
   cout<<p->length<<endl;//dereferencing or accesing value of another struct 
   cout<<r.length<<endl;

return 0;
}