#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[20];
    scanf("%[^\n]*%c", &str);

    int x;
    sscanf(str, "%d", &x);
    // printf("%d\n",x);
    // printf("%c",str[9]);

    while (x > 0)
    {
        x=x*10+x%3;
    }

    return 0;
}