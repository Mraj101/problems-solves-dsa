#include<bits/stdc++.h>
using namespace std;
int main(){
char str[40]={"Miraj"};
int size=strlen(str);
for(int i=0;i<=size/2;i++){
    int j=size;
    char temp=str[i];
    str[i]=str[j-i-1];
    str[j-i-1]=temp;
}
for(int j=0;j<size;j++){
    printf("%c",str[j]);
}
return 0;
}