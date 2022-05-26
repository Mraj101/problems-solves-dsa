#include <bits/stdc++.h>
using namespace std;

int isalphaNumber(char s[])
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (isalnum(s[i]) == 0)
            return 0;
    }
    return 1;
}

int isNumber(char s[])
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (isdigit(s[i]) == 0)
            return 0;
    }
    return 1;
}

int main()
{
    char rawnumbers[1024]; // for character number input
    int rawnums[1024];     // integer array
    int tobe_romannumber;
    scanf("%s", rawnumbers); // scanning the string of numbers
    int length = strlen(rawnumbers);
    if (isNumber(rawnumbers))
    {
        tobe_romannumber = stoi(rawnumbers);
        while (tobe_romannumber != 0)
        {

            if (tobe_romannumber >= 1000)
            {
                printf("M");
                tobe_romannumber = tobe_romannumber - 1000;
            }

            if (tobe_romannumber >= 900 && tobe_romannumber < 1000)
            {
                printf("CM");
                tobe_romannumber = tobe_romannumber - 900;
            }

            if (tobe_romannumber >= 500 && tobe_romannumber < 900)
            {
                printf("D");
                tobe_romannumber = tobe_romannumber - 500;
            }

            if (tobe_romannumber >= 400 && tobe_romannumber < 500)
            {
                printf("CD");
                tobe_romannumber = tobe_romannumber - 400;
            }

            if (tobe_romannumber >= 100 && tobe_romannumber < 400)
            {
                printf("C");
                tobe_romannumber = tobe_romannumber - 100;
            }

            if (tobe_romannumber >= 90 && tobe_romannumber < 100)
            {
                printf("XC");
                tobe_romannumber = tobe_romannumber - 90;
            }

            if (tobe_romannumber >= 50 && tobe_romannumber < 90)
            {
                printf("L");
                tobe_romannumber = tobe_romannumber - 50;
            }

            if (tobe_romannumber >= 40 && tobe_romannumber < 50)
            {
                printf("XL");
                tobe_romannumber = tobe_romannumber - 40;
            }

            if (tobe_romannumber >= 10 && tobe_romannumber < 40)
            {
                printf("X");
                tobe_romannumber = tobe_romannumber - 10;
            }

            if (tobe_romannumber == 9)
            {
                printf("IX");
                tobe_romannumber=tobe_romannumber-9;
            }
            if (tobe_romannumber >= 5 && tobe_romannumber < 9)
            {
                printf("V");
                tobe_romannumber = tobe_romannumber - 5;
            }
            if (tobe_romannumber == 4)
            {
                printf("IX");
            }
            if (tobe_romannumber >= 1 && tobe_romannumber < 4)
            {
                printf("I");
                tobe_romannumber -= 1;
            }
        }
    }

    else{
        int i;
        while(rawnumbers[i]!='/0'){

            i++;
        }
        if(rawnumbers[])

    }

    return 0;
}