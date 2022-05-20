#include<stdio.h>
int main()
{
    int n,i,m;
    float x,sum=0,y;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        m=i+1;
        x=(float)(m)/(m+1);
        sum=sum+x;
        printf("%d/%d+ ",m,m+1);

    }
    printf("\n");
    printf("%f",sum);
    return 0;
}
