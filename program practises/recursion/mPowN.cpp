#include<iostream>
using namespace std;

int power(int i,int j){

    if(j==0)
      return 1;
    else
    {
        return power(i,j-1)*i;
    }
}        

int main(){

    int total=power(2,4);
    cout<<total<<endl;
    return 0;
}