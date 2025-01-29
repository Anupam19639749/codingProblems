#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    unordered_set<int> set1(nums1.begin(), nums1.end());
    unordered_set<int> resultSet;

    for (int num : nums2)
    {
        if (set1.count(num))
        {
            resultSet.insert(num);
        }
    }

    return vector<int>(resultSet.begin(), resultSet.end());
}

int main()
{
    vector<int> nums1 = {4, 9, 5};
    vector<int> nums2 = {9, 4, 9, 8, 4};

    vector<int> result = intersection(nums1, nums2);

    cout << "Intersection: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}