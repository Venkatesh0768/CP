#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int upperBound(vector<int> arr, int target)
{
    int n = arr.size();
    int l = 0;
    int r = n - 1;

    int ans = n;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] > target)
        {
            ans = min(ans, mid);
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> a = {1, 2, 4, 5};
    int index = upperBound(a, 1);
    cout << index << endl;
    return 0;
}
