#include <bits/stdc++.h>
using namespace std;

int missing(vector<int> arr, int n)
{
    int total = n * (n + 1) / 2;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int res = total - sum;
    return res;
}

int main()
{
    int n = 5;
    vector<int> arr = {1, 2, 3, 5};
    cout << missing(arr, n);
    return 0;
}