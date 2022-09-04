#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        // int z=n/2;
        int count=0;
      
        for(int z=n/2;z>=1;--z){
            for(int x=1;x<=(n/2)/2;++x){
               for(int y=n/2-1;y>=ceil((n/2)/2);--y){
                if(x+y+z==n&&y>=x)count++;
               }
            }
        }
        

        
        cout<<count+1<<endl;

        
    }
}