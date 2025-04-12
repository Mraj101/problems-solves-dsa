#include<iostream>
using namespace std;
class Rectangle
{private:
int length;
int breadth;
    /* data */
public:
Rectangle(int l,int b)//constructor
{
    length=l;
    breadth=b;
}
void changelength(int l)
{
    length=l; 
}

void area(struct Rectangle r1){
   int area=r1.breadth*r1.length;
    cout<<area<<endl;
}
};

int main(){
 Rectangle r(12,10); 
 r.area(r);
 r.changelength(20);
 r.area(r); 
 return 0;
}