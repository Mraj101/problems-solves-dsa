#include<stdio.h>
int main()
{

    int t,k,i,j,l;


    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&k);
        int nk[k];
        if(k>0)
        {
             int d=1,  z,zz;
            for(j=0; j<k; j++)
            {
                scanf("%d",&nk[j]);
                d=d*nk[j];
                if(k<2)
                    d=d*nk[j];
            }
            z=d;
            for(l=k-1; l>=0 ; l--){
                zz=z;
                z = z/nk[l];
                if(z%nk[k-1]!=0)break;
            }
            printf("Case %d: %d\n",i, zz);
        }


    }
    return 0;
}
