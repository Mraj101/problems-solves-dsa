#include <bits/stdc++.h>
using namespace std;

int isNumber(char s[])
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (isdigit(s[i]) == 0)
            return 0;
    }
    return 1;
}

int main()
{
    char str[20];
    int newstr[20];
    int tc;
    scanf("%d", &tc);
    int x;
    while (tc--)
    {
        scanf("%s",str);
        if (isNumber(str))
        {
            for (int i = 0; i < strlen(str); i++)
                newstr[i] = str[i] - '0';
        }
        int sum1 = newstr[0] + newstr[1] + newstr[2];
        int sum2 = newstr[3] + newstr[4] + newstr[5];
        if (sum1 == sum2)
            printf("YES\n");
        else
            printf("NO\n");
      
    }
      return 0;
}