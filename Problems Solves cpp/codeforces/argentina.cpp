#include <stdio.h>
int isalphaNumber(char s[])
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (isalnum(s[i]) == 0)
            return 0;
    }
    return 1;
}

int isNumber(char s[])
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (isdigit(s[i]) == 0)
            return 0;
    }
    return 1;
}

int main()
{
    
    while(scanf("%d",&n)==1){

    printf("Argentina\n");    
    }
    return 0;
}