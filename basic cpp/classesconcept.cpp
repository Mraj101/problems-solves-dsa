#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle(){
        length=breadth=1;
    }
    Rectangle(int l,int b);
    int area();
    // int changelength();
    // int getlength();
};
Rectangle::Rectangle(int l,int b){
        length=l;
        breadth=b;
    }
int Rectangle::area(){
    return length*breadth;
}
int main(){
    Rectangle r(7,8);
    cout<<"hello"<<endl;
    cout<<r.area();
return 0;
}