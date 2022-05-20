#include<stdio.h>
int main()
{
    char quotes;
    int x=0;

    while(scanf("%c",&quotes)!=EOF)
        if(quotes=='"')
        {
            if(x%2==0)
            {
                printf("``");
                x++;
            }
            else if(x%2==1)
            {
                printf("''");
                x++;
            }
        }
        else
            printf("%c",quotes);
    return 0;
}

