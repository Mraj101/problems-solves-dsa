#include<bits/stdc++.h>
using namespace std;
int main(){
    char mon[100];
    char day[10];
    int tc;
    scanf("%d",&tc);
    for(int i=0;i<tc;i++)
    {
        scanf("%s",mon);
        scanf("%s",day);
        
        if(strcmp(day,"WED")==0 && ((strcmp(mon,"SEP"))==0 || (strcmp(mon,"APR" ))==0)|| (strcmp(mon,"JUN"))==0 || (strcmp(mon,"NOV")) ==0)
            printf("%d",8);
        
        else if((strcmp(day,"FRI"))==0 || (strcmp(day,"THU"))==0)
            printf("%d",10);
        else
            printf("%d",8);

    }
    
    
return 0;
}