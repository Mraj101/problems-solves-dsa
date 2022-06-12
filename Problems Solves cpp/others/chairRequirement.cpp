#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        if (a < b)
            printf("0\n");
        else
        {
            printf("%d\n", abs(a - b));
        }
    }
    return 0;
}