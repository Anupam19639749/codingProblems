#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int nonZeroIndex = 0; // Pointer for placing non-zero elements

    // Move all non-zero elements to the front
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            nums[nonZeroIndex++] = nums[i];
        }
    }

    // Fill the remaining elements with zeros
    for (int i = nonZeroIndex; i < nums.size(); i++)
    {
        nums[i] = 0;
    }
}

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12, 8, 9, 10, 5, 0};
    moveZeroes(nums);

    // Print the result
    for (int num : nums)
    {
        cout << num << " ";
    }
    return 0;
}
