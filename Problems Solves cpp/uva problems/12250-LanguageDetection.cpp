#include <bits/stdc++.h>
using namespace std;
int main()
{
    char lang[1024];
    int c=0;
    while (scanf("%s", lang) != EOF)
    {
       
       if(strcmp(lang,"#")==0)
        return 0;

        if (strcmp(lang, "HELLO") == 0)
            printf("Case %d: ENGLISH\n",++c);
        else if (strcmp(lang,"HOLA") == 0)
            printf("Case %d: SPANISH\n",++c);
        else if (strcmp(lang,"HALLO") == 0)
            printf("Case %d: GERMAN\n",++c);
        else if (strcmp(lang,"BONJOUR") == 0)
            printf("Case %d: FRENCH\n",++c);
        else if (strcmp(lang,"CIAO") == 0)
            printf("Case %d: ITALIAN\n",++c);
        else if (strcmp(lang,"ZDRAVSTVUJTE") == 0)
            printf("Case %d: RUSSIAN\n",++c);
        else
            printf("Case %d: UNKNOWN\n",++c);
    }
    return 0;
}