#include <bits/stdc++.h>

using namespace std;

#define mx 10000007
int phi[mx];
long long phiSum[mx];

void euler_totient() {
    for(int i=0; i<mx; i++) phi[i]=i;
    for(int i=2; i<mx; i++) {
        if(phi[i]==i) {
            for(int j=i; j<mx; j+=i)
                phi[j]-=(phi[j]/i);
        }
    }
}

int solve(int n, long long p) {
    int lo=1,hi=n;
    int ret=-1;
    while(lo<=hi) {
        int mid=(lo+hi)/2;
        if(phiSum[mid]>=p) {
            ret=mid;
            hi=mid-1;
        } else {
            lo=mid+1;
        }
    }
    return ret;
}

int main() {

    euler_totient();
    for(int i=1; i<mx; i++) phiSum[i]+=phiSum[i-1]+phi[i]; //cumulative sum

    int t;
    scanf("%d",&t);
    for(int z=1; z<=t; z++) {
        long long n,p;
        scanf("%lld %lld",&n,&p);
        int ans=solve(n,p);
        printf("Case %d: ",z);
        if(ans!=-1)
            ans=n/ans;
        printf("%d\n",ans);
    }
    return 0;
}
