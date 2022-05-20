#include<iostream>
using namespace std;

int main()
{

    int N,i;
    scanf("%d",&N);
    if(N<6)
        printf("1\n");
    else
    {
           N=N/6;
           N++;
           printf("%d\n",N);
    }


    return 0;
}
