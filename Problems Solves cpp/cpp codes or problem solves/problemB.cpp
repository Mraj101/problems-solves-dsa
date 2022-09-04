#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
   
    int maxi=0;
    
    maxi=max(a*b*c,maxi);
     maxi=max((a+b+c),maxi);
     maxi=max(((a*b)+c),maxi);
     maxi=max((a+(b*c)),maxi);
     maxi=max(((a+c)*b),maxi);
     maxi=max(((a+b)*c),maxi);
     cout<<maxi<<endl;
      
    
    return 0;
}