#include<bits/stdc++.h>
using namespace std;
int main(){
int tc;
int a,b;
scanf("%d",&tc);
for(int i=0;i<tc;i++)
{
    scanf("%d%d",&a,&b);
    if(a<b)
     printf("<\n");
    else if(a>b)
        printf(">\n");
    else
        printf("=\n");
}
return 0;
}