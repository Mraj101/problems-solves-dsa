#include<stdio.h>
#include<vector>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;
static vector<int> g[1024];
int main()
{

    int i,j,z,t,n,k,child,v,u,count=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&n,&k);
        for(j=1;j<n;j++)
        {
            scanf("%d %d",&u,&v);
            g[u].push_back(v);
            g[v].push_back(u);
        }
        child=k;
        for(z=0;z<n;z++)
        {
            if(g[z]=1)
            {
                count++;
            }
            if(count=child)
            printf("case %d: %d",z+1,count);
        }

    }
    return 0;
}
