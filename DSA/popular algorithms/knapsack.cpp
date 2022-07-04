#include <stdio.h> //header file

int max(int a, int b) // max function reuturns the maximum of the two
{
    if (a > b)
        return a;
    else
        return b;
}
int knapsack(int n, int wt, int pw[], int p[]) // calling knapsack which returns the maximum profit
{
    int knap[n + 1][wt + 1]; // the knapsack table containing profits according to the weights
    int i, w;                // varibale for row and column

    for (i = 0; i <= n; i++) // for determining the profit in the knapsack table
    {
        for (w = 0; w <= wt; w++)
        {
            if (i == 0 || w == 0)
                knap[i][w] = 0; // for the 0th row and 0th column
            else if (pw[i - 1] <= w)
                knap[i][w] = max(p[i - 1] + knap[i - 1][wt - pw[i - 1]], knap[i - 1][w]); // implementing the knapsack formula
            else
                knap[i][w] = knap[i - 1][w]; // if the pw[i-1]>w than set knapsack table like this
        }
    }
    return knap[n][wt]; // return the value we found
}
int main()
{
    int n = 4;               // number of objects
    int w[4] = {3, 5, 4, 6}; // array of weights
    int p[4] = {2, 3, 1, 4}; // array of profits
    int wt = 8;              // total capacity of the bag

    printf("the max profit: %d\n", knapsack(n, wt, w, p)); // printing the value returned from the knapsack function
    return 0;
}
