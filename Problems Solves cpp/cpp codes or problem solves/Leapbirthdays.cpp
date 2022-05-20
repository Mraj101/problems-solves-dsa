#include<stdio.h>
bool isLeapYear(int year)
{
    if (year % 400 == 0) return true;
    else if(year % 100 == 0) return false;
    else if(year % 4 == 0) return true;
    else return false;
}
int main()
{
    int T,D,M,Y,QY,i,j,counter;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d %d %d %d",&D,&M,&Y,&QY);
        if(isLeapYear(Y) && D==29 && M==2)
        {
            counter=0;
            for(j=Y; j<=QY; j++)
            {

               if(isLeapYear(j))
                    counter++;

            }
            printf("Case %d: %d\n",i,counter-1);

        }
        else
        {
            printf("Case %d: %d\n",i,QY-Y);
        }


    }
    return 0;
}
