#include<bits/stdc++.h>
using namespace std;
int main(){
int test_case;
int n,m;
scanf("%d",&test_case);
for(int i=0;i<test_case;i++)
{
    scanf("%d %d",&n,&m);
    n=n/3;
    m=m/3;
    int total_sonar=m*n;
    printf("%d\n",total_sonar);   
}
return 0;
}