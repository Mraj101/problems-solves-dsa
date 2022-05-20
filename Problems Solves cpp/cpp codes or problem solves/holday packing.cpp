#include<stdio.h>
int main()
{

    int L,W,H;
    int t,i;

    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&L,&W,&H);
        if((L<=20) && (W<=20) && (H<=20))
           {
               printf("Case %d: good\n",i);

           }
        else
            printf("Case %d: bad\n",i);
     }
    return 0;

}
