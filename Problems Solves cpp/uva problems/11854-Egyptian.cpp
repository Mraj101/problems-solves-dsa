#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c;
while(scanf("%d %d %d",&a,&b,&c)!=EOF)
{   
    if(a==0 && b==0 && c==0)
        return 0;  

        int val=a*a+b*b;
        int newval=c*c;

        int val_2=b*b+c*c;
        int newval_2=a*a;

        int val_3=a*a+c*c;
        int newval_3=b*b;

    if(val==newval)
        printf("right\n");
    else if(val_2==newval_2)
        printf("right\n");
    else if(val_3==newval_3)
        printf("right\n");
    else
        printf("wrong\n");
}
return 0;
}