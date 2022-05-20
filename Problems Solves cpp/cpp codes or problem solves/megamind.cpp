#include<stdio.h>
int main()
{
    int t,e,p,k,r,i,j;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d %d",&e,&p,&k,&r);

        if(e>p*k && p*k<=r)
            printf("Case %d: -1\n",i);

        else if(e<=p*k)
            printf("Case %d: %d\n",i,k);

        else if(e>p*k)
        {
            int count = 0;
            while(e>=p*k)
            {
                if(e>p)
                    count= count +k;

                e=r+e-(p*k);
                if(e<=p)
                    count++;
            }
            printf("Case %d: %d\n",i,count);
        }
    }
    return 0;
}
