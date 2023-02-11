#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin >> t;
    for (long long int i = 1; i <= t; i++)
    {
        long long int n, k;
        cin >> n >> k;
        long long int arr[n];

        for (long long int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long int *max;
        max = std::max_element(arr, arr + n);
        long long int sum = 0;
        for (long long int i = 0; i < n - 1; i++)
        {
            sum = sum + arr[i];
        }
        if (*max == arr[n - 1])
        {
            sum += arr[n - 1] * k;
        }
        else
        {
            sum = sum + (arr[n - 1] * k) + (*max - arr[n - 1]) * (k - 1);
        }

        cout << "Case " << i << ": " << sum << endl;
    }
    return 0;
}