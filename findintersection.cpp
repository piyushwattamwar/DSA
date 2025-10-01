#include <bits/stdc++.h>
using namespace std;

vector<int> findIntersection(vector<int> &arr1, vector<int> &arr2)
{
    int n = arr1.size();
    int m = arr2.size();
    int i = 0, j = 0;
    vector<int> result;

    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            if (result.empty() || result.back() != arr1[i])
            {
                result.push_back(arr1[i]);
            }
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    return result;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {3, 4, 5, 7, 8};
    vector<int> ans = findIntersection(arr1, arr2);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}
