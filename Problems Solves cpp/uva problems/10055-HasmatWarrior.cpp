#include<bits/stdc++.h>
using namespace std;
int main(){
long long int hasmats_army;
long long int opponent_army;
while(scanf("%lld%lld",&hasmats_army,&opponent_army)==2)
{
    
    if(hasmats_army<opponent_army)
    printf("%lld\n",opponent_army-hasmats_army);
    else
    printf("%lld\n",hasmats_army-opponent_army);
}

return 0;
}