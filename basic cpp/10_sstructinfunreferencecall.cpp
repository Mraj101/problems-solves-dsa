#include<iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
    /* data */
};
void initialization(struct Rectangle *r,int l,int b)
{
    r->length=l;
    r->breadth=b;
}
void changelength(struct Rectangle *r,int l)
{
    r->length=l;
}

void area(struct Rectangle r1){
   int area=r1.breadth*r1.length;
    cout<<area<<endl;
}

int main(){
 struct Rectangle r;
 initialization(&r,10,5);
 area(r);
 changelength(&r,20);
 area(r); 
return 0;
}