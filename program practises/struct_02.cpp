#include<stdio.h>
#include<iostream>
using namespace std;
struct student{
int id;
int age;
char name[25];
char dept[25];
char address[25];
char bloodtype[25];
};
int main()
{
    struct student Miraj={183000065,23,"Hasnain","computer science","Narayangonj","Ab+"};
    printf("%d",Miraj.id);
    printf("\n%s",Miraj.address);
    return 0;
}