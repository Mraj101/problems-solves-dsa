#include <bits/stdc++.h>
using namespace std;
int Func(int i, int j)
{
    int maxcycle_length = 1;
    int cycle_length;
    int nbr;
    if(i>j)
        swap(i,j);
    for (nbr = i; nbr <= j; nbr++)
    {
        int n = nbr;
        cycle_length = 1;
        while (n != 1)
        {
            if (n % 2 == 1)
                n = (3 * n) + 1;
            else
                n = n / 2;
            cycle_length++;
        }
        if (cycle_length > maxcycle_length)
            maxcycle_length = cycle_length;
        /* code */
    }
    return maxcycle_length;
}
int main()
{
    int i, j;
    while (scanf("%d %d", &i, &j) != EOF)
    {
        int result = Func(i, j);
        printf("%d %d %d\n",i,j,result);
    }
    return 0;
}