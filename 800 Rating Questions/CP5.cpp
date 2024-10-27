#include <iostream>
using namespace std;
#include <vector>
#include <unordered_set>
 
bool containsDuplicate(int nums[], int n)
{
    std::unordered_set<int> seen;
 
    for (int i = 0; i < n; i++)
    {
 
        if (seen.find(nums[i]) != seen.end())
        {
            return false;
        }
        seen.insert(nums[i]);
    }
 
    return true;
}
 
int main()
{
    int t;
    cin >> t;
 
    while (t > 0)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
 
        for (int i = 1; i < n - 1; i++)
        {
            if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout<<arr[i] << " ";
        }
        
 
        if (arr[n - 1] <= n && containsDuplicate(arr, n) && arr[0] == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
 
        t--;
    }
 
    return 0;
}