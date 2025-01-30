#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSumHashMap(vector<int> &nums, int target)
{
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];
        if (map.find(complement) != map.end())
        {
            return {map[complement], i}; // Found pair
        }
        map[nums[i]] = i; // Store the index of current number
    }
    return {}; // No solution
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 18;
    vector<int> result = twoSumHashMap(nums, target);

    if (!result.empty())
    {
        cout << "Indices: " << result[0] << ", " << result[1] << "\n";
    }
    else
    {
        std::cout << "No solution found\n";
    }
    return 0;
}
