#include <bits/stdc++.h>
using namespace std;

void move_zeros(int arr[], int n)
{
    int i = -1;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != 0)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
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
    move_zeros(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}