#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b;
    int tc;
    double  proper_group;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        scanf("%lf %lf", &a, &b);
        proper_group = ceil(a/6);
        printf("%.lf\n", proper_group * b);
    }
    return 0;
}