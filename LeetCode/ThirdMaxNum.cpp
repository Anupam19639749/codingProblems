#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int thirdMax(vector<int> &nums)
{
    long first = LONG_MIN, second = LONG_MIN, third = LONG_MIN;
    for (int num : nums)
    {
        if (num == first || num == second || num == third)
        {
            continue;
        }
        if (num > first)
        {
            third = second;
            second = first;
            first = num;
        }
        else if (num > second)
        {
            third = second;
            second = num;
        }
        else if (num > third)
        {
            third = num;
        }
    }
    return third == LONG_MIN ? first : third;
}

int main()
{
    vector<int> nums = {2, 2, 3, 1, 6, 9, 7, 5};
    cout << "Third maximum number: " << thirdMax(nums) << endl;
    return 0;
}