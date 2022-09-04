#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    int tc;
    int a, b, c, k;
    scanf("%d", &tc);
    for (int i = 0; i <tc; ++i)
    {
        scanf("%d %d %d %d", &a, &b, &c, &k);
        if (__gcd(__gcd(a,b),c)==k)
        {
            printf("Case %d: Peaceful\n", i+1);
        }
        else
            printf("Case %d: Fight\n", i+1);
    }
    return 0;
}