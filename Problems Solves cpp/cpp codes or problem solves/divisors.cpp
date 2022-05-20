#include<stdio.h>
int main()
{

    int t,k,i,j,d;

    int nk[1024];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&k);
        if(k>0)
        {
             d=1;
            for(j=0; j<k; j++)
            {

                    scanf("%d",&nk[j]);
                    d=nk[0]*nk[k-1];

                if(k<2)
                    d=nk[j]*nk[j];

            }

            printf("Case %d: %d\n",i,d);
        }


    }
    return 0;
}
