#include<iostream>
using namespace std;
struct Rectangle{
    int breadth;
    int length;
};
int main(){
struct Rectangle *p;
p=(struct Rectangle*)malloc(sizeof(struct Rectangle));//declard the structed and stored in a heap or stored dynamically
p->length=10;//use arrow to pointer to the dynamic varible;
p->breadth=5;

return 0;
}