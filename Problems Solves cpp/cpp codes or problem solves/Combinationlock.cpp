#include<stdio.h>
int main()
{
   int start,first,second,third,total_degrees;
   while(scanf("%d %d %d %d",&start,&first,&second,&third))
   {
       if(start==0 && first==0 && second==0 && third==0 )
        return 0 ;
       else
       {
           total_degrees=1080+(((start-first+40)%40+(second-first+40)%40+(second-third+40)%40)*9);
           printf("%d\n",total_degrees);

       }
   }
    return 0;
}
