#include<iostream>
#include<algorithm>
#include<climits>
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
    int T,i,j,n,count;
    int arrlen;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        count=0;
        scanf("%d",&n);
        int arr[n];

        for(j=0; j<n; j++)
            scanf("%d",&arr[j]);


        arrlen=sizeof(arr)/sizeof(arr[0]);
        int nosrtsum=maxSubArraySum(arr,arrlen);

        sort(arr,arr+arrlen);

        int max_sum = maxSubArraySum(arr,arrlen);

        if(nosrtsum!=max_sum)
        {
            count++;
            printf("Case %d: %d %d\n",i,max_sum,count);
        }
        else
         printf("Case %d: %d %d\n",i,nosrtsum,count);
    }


    return 0;
}

