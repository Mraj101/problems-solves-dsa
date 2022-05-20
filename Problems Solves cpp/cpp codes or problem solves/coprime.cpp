#include<iostream>
#include <algorithm>
using namespace std;
int main()
{

    long int a,b,m,x,y;
    int count,i,T;

    scanf("%d",&T);
    if(T>0 && T<=1000)
    {
        for(i=1; i<=T; i++)
        {
            count=0;
            scanf("%ld %ld %ld",&a,&b,&m);

            long int k=0;
            while(k<=m)
            {
                x=a+k;
                y=b+k;
                k++;
                if((__gcd(x,y))==1)
                {
                    count++;
                }
            }
             printf("Case %d: %d\n",i,count);
        }

    }
    return 0;
}


