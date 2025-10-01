#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int> &arr1, vector<int> &arr2)
{
    int n = arr1.size();
    int m = arr2.size();
    int i = 0, j = 0;
    vector<int> result;

    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            if (result.empty() || result.back() != arr1[i])
            {
                result.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (result.empty() || result.back() != arr2[j])
            {
                result.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (i < n)
    {
        if (result.empty() || result.back() != arr1[i])
        {
            result.push_back(arr1[i]);
        }
        i++;
    }

    while (j < m)
    {
        if (result.empty() || result.back() != arr2[j])
        {
            result.push_back(arr2[j]);
        }
        j++;
    }

    return result;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {3, 4, 5, 7, 8};
    vector<int> ans = findUnion(arr1, arr2);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}
