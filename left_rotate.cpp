#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int left, int right)
{
    while (left < right)
    {
        swap(arr[left++], arr[right--]);
    }
}
void left_rotate(int arr[], int n, int k)
{
    rotate(arr, 0, k - 1);
    rotate(arr, k, n - 1);
    rotate(arr, 0, n - 1);
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
    int k;
    cin >> k;
    left_rotate(arr, n, k);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}