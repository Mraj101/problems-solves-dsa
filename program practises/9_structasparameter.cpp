#include<iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
    /* data */
};

int area(struct Rectangle r1){
   int area=r1.breadth*r1.length;//accessing struct with r1
    return area;
}
int main(){
 struct Rectangle r={5,10};
int A=area(r);
cout<<A<<endl;
return 0;
}