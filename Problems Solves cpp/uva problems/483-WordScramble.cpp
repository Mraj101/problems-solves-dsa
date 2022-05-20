#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch[1024];
    int i, j, k;
    stack<char> st;
    while (scanf("%[^\n]%*c", &ch) == 1)
    {
        int len = strlen(ch);
        for(int i=0;i<len;i++)
        {
          
            if(ch[i]!=' ')
            {
                st.push(ch[i]);
            }
            else
            {
                while (st.empty()==false)
                {
                    printf("%c",st.top());
                    st.pop();
                }
                printf(" ");
            }
          
            
        }
          while (st.empty()==false)
            {
                printf("%c",st.top());
                st.pop();
            }
            printf("\n");

        
    }
    return 0;
}