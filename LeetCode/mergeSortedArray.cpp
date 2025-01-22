#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int left = 0;
    int right = 0;
    vector<int> temp;
    while (left < m && right < n)
    {
        if (nums1[left] <= nums2[right])
        {
            temp.push_back(nums1[left]);
            left++;
        }
        else
        {
            temp.push_back(nums2[right]);
            right++;
        }
    }
    while (left < m)
    {
        temp.push_back(nums1[left]);
        left++;
    }
    while (right < n)
    {
        temp.push_back(nums2[right]);
        right++;
    }
    for (int i = 0; i < temp.size(); i++)
    {
        nums1[i] = temp[i];
    }
}

int main()
{
    vector<int> arr1 = {5, 6, 7, 0, 0, 0};
    vector<int> arr2 = {4, 5, 6};
    merge(arr1, 3, arr2, 3);
    cout << "Sorted merged array: ";
    for (int i : arr1)
    {
        cout << i << " ";
    }
    return 0;
}