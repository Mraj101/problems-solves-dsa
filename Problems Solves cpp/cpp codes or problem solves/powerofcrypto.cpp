#include<stdio.h>
#include<math.h>

int main()
{
   double n,p;
   while( scanf("%lf %lf",&n,&p)==2){
   double val=pow(p,1/n);
   printf("%.0lf\n",val);
   }
   return 0;
}