#include<bits/stdc++.h>
using namespace std;
int max(int a, int b){
    if(a>=b)
        return a;
    else
        return b;
}

int knapsack(int n, int wt, int pw[],int p[])
{
    int knap[n+1][wt+1];
    int i,w;
    for(i=0;i<n;i++)
    {
        for(w=0;w<=wt;w++)
        {
            if(i==0 || w==0)
                knap[i][w]=0;
            else if(pw[i-1]<=w)
                knap[i][w]=max(p[i-1]+knap[i-1][wt-pw[i-1]],knap[i-1][w]);
        }

    }
}
int main(){
int n=4;
int w[n]={3,5,4,6};
int p[n]={2,3,1,4};
int wt=8;
printf("max profit is : ",knapsack(n,wt,p,w));
return 0;
}