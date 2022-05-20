#include <stdio.h>

int main()
{
  int a,b,c;
  scanf("%d %d %d",&a, &b, &c);
  if(a<=100 && b<=100 && c<=100){
  if(a==b && b==c && c==a){printf("Equilateral Triangle\n");}
  else if(a==b || a==c || c==b){printf("Isosceles Triangle\n");}
  else printf("Bad Triangle\n");
  }
  return 0;
}
