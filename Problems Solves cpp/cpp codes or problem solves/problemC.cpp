#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    for(int i=1;i<=t;++i){
        int n;
        cin>>n;
        int contained=0;
        int res=0;
        for(int i=0;i<n-1;++i){
            int p,q;
            cin>>p>>q;
            if((contained-q)>=0){
                contained=contained-q;
                contained=contained+p;
                res=max(res,contained);
            }
        }
       cout<<"Case "<<i<<": "<<res<<endl;
    }
    return 0;
}
