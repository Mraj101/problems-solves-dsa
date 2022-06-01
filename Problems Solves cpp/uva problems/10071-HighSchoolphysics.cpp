#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v;
    int t;
    while (scanf("%d%d", &v, &t) != EOF)
    {
        int displacement = 2 * (v * t);
        printf("%d\n", displacement);
    }
    return 0;
}