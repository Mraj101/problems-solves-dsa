#include<bits/stdc++.h>
using namespace std;
int main(){
int tc,p,v,t,count=0;
scanf("%d",&tc);
while(tc--)
{
    scanf("%d %d %d",&p,&v,&t);
    if((p==1 && v==1) || (p==1 && t==1) || (v==1 && t==1) || (p==1 && v==1 && t==1))
        count++;
}
printf("%d\n",count);
return 0;
}