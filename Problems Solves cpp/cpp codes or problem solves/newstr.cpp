#include<stdio.h>
int main()
{
    int i=0;
    char str[5] = "Life", str2[7] = "Quotes";
 
    while(str[i]!='\0') {
        printf("%c", str[i]); // printing string 1
        i++;
    }
    printf(" ");
    {
        printf("%c", str2[i]); // printing string 2
    }
    return 0;
}
 