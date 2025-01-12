#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int result = 0;
        int totalZOR = 0;
        int arrayZOR = 0;

        // XOR all numbers from 0 to n
        for (int i = 0; i <= nums.size(); i++)
        {
            totalZOR ^= i;
        }
        // XOR all numbers in the array
        for (int num : nums)
        {
            arrayZOR ^= num;
        }

        return totalZOR ^ arrayZOR;
    }
};
int main()
{
    Solution sol;
    vector<int> nums = {3, 0, 1};
    cout << "The missing number is: " << sol.missingNumber(nums) << endl;
    return 0;
}
