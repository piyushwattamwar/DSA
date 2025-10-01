#include <bits/stdc++.h>
using namespace std;

int linear_search(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    int ans = linear_search(arr, n, target);
    if (ans != -1)
    {
        cout << "Element found at index: " << ans;
    }
    else
    {
        cout << "Element not found";
    }
    return 0;
}