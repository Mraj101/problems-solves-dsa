#include<stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    char* c=(char*)&i;
  
    printf(" the number is %d ",c);
}