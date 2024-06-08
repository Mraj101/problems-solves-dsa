#include <iostream>
using namespace std;

int sum(int range)
{
    if (range == 0)
        return 0;
    else
        return sum(range - 1) + range;
}

int main()
{
    int total_sum = sum(5);
    cout << total_sum << endl;
        return 0; 
}