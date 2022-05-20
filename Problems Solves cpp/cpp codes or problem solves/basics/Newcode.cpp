// Online C++ compiler to run C++ program online
#include <iostream>
int checkulgy(int n)
{
    while(n%2==0)n=n/2;
    while(n%3==0)n=n/3;
    while(n%5==0)n=n/5;
    
    return (n==1)?true:false;
}
int main() {
    // Write C++ code here
   int count=0;
   int n=1;
   int uglynumber=0;
   while(n!=1501){
       uglynumber++;
       if(checkulgy(uglynumber))
       {
             n++;
       }
     
   }
   printf("%d",uglynumber);

    return 0;
}