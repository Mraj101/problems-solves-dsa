#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n;
    cin>>n;
    while(n!=0){
        
        if(n%17==0) cout<<1<<endl;
        else cout<<0<<endl;
        cin>>n;
    }
}