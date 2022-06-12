#include<bits/stdc++.h>
using namespace std;
int main(){
int tc;
int a,b;
scanf("%d",&tc);
for(int i=0;i<tc;i++)
{
        scanf("%d %d",&a,&b);
        int diff=b-a;
        int result=diff/3;
        if(a==1 && b==2)
            printf("YES\n");
        else if(diff%3==0 || diff%3==1)
            printf("YES\n");
        else
            printf("NO\n");
        
}
return 0;
}   