#include<bits/stdc++.h>
using namespace std;
int main(){
int testcase;
char words[100];
scanf("%d",&testcase);
while(testcase--)
{
    scanf("%s",&words);
    int len=strlen(words);
        if(len>10)
         printf("%c%d%c\n",words[0],len-2,words[len-1]);
        else
            printf("%s\n",words);
}
return 0;
}