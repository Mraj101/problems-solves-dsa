#include<iostream>
#include<algorithm>
using namespace std;
int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;

    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
int main()
{
    int T,i,n;
    int arr[]=0;
    int size;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&n)
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[j]);

        }
        size=sizeof(arr)/sizeof(arr[0]);
        sort(arr,arr+size);
    }
    int max_sum = maxSubArraySum(a, n);
    return 0;
}
