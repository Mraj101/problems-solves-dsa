#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
int digitSum(int x){
    int ans=0;
    while(x){
        ans+=x%10;
        x/=10;
    }
    return ans;
}
void solve(){
    int n;
    cin>>n;
    int x=n/2;
    int y=n-x;
    if((x%10==0&&y==x-1)||(y%10==0&&x==y-1)){
        int p=min(x,y);//19
        int q=max(x,y);//20
        p--;q++;
        int o=digitSum(p);
        int l=digitSum(q);
  
        int diff=abs(o-l);
        p-=(diff/2);
        q=n-p;
        cout<<p<<" "<<q<<endl;
    }
    else cout<<x<<" "<<y<<endl;

}
signed main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}