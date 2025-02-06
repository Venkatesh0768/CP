#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int generatePermutations(vector<int> nums)
{
    sort(nums.begin(), nums.end());
    int count = 0;

    do
    {
        if (nums[0] * nums[1] == nums[2] * nums[3] && nums[0] != nums[1] != nums[2] != nums[3])
        {
            count++;
        }

    } while (next_permutation(nums.begin(), nums.end()));

    return count;
}
int main()
{
    vector<int> a = {2, 3, 4, 6};
    generatePermutations(a);

    return 0;
}

// void generatePermutations(string &str, int l, int r) {
//     if (l == r) {
//         cout << str << endl;
//         return;
//     }

//     for (int i = l; i <= r; i++) {
//         swap(str[l], str[i]);
//         generatePermutations(str, l + 1, r);
//         swap(str[l], str[i]);
//     }
// }
