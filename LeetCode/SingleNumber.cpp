#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int result = 0;
        for (int num : nums)
        {
            result ^= num; // XOR all the elements
        }
        return result;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {4, 1, 2, 1, 2, 4, 5};
    cout << "The single number is: " << solution.singleNumber(nums) << endl;
    return 0;
}