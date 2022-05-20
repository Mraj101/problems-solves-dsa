#include<stdio.h>
int main(){
    double num1;
    printf("Enter a number: ");
    scanf("%lf", &num1);
    if(num1<=0){
        printf("your entered is a negative number");
    }else if(num1>0){
        printf("your entered is a postiive number");
    }else{
        printf("your entered is a 0 number");
    }
    return 0;
}