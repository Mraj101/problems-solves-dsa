#include<stdio.h>
#include<iostream>
using namespace std;
struct triangle{
    int length1;
    int length2;
    int length3;
};
int main(){
    // we can use struct in different places such as 1.complex numbers 
    // 2.student information.
    struct triangle t={11,12,13};
     //initializing and declaring struct at the same time.
    printf("%d",t.length1);
    printf("%d",t.length2);
    printf("%d",t.length3);
    int area=t.length1*t.length2*t.length3;
    printf("\nArea is %d",area);
    return 0;
}
