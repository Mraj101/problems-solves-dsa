#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, test_case;
    int s1, s2, s3;
    scanf("%d", &test_case);
    for (i = 0; i < test_case; i++)
    {
        scanf("%d %d %d", &s1, &s2, &s3);
        if ((s1>s2 && s1<s3)||(s1<s2 && s1>s3)){
            printf("Case %d: %d\n",i+1,s1);
        }
        else if((s2>s1 && s2<s3)||(s2<s1 && s2>s3)){
            printf("Case %d: %d\n",i+1,s2);
        }
        else
           printf("Case %d: %d\n",i+1,s3);
    }
    return 0;
}