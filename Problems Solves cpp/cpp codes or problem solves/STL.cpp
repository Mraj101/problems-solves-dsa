#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool compare(int a,int b)
{
    return a>b;
}
void display(int arr[])
{

      for(int i=0;i<6;i++)
   printf("%d ",arr[i]);

}
void display2(vector <int> &v)
{
      for(int i=0;i<v.size();i++)
   printf("%d ",v[i]);

}
int main()
{
    int i;
    vector<int> vec1;
int vecelement;
    for(i=0;i<5;i++)
    {
        printf("vecelement");
         scanf("=%d\n",vecelement);
               vec1.push_back(vecelement);
    }
    int arr[]={5,4,6,8,9,0};
    sort(arr,arr+6,compare);

    display(arr);
    display2(vec1);


    return 0;
}
