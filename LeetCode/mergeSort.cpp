#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &nums, int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;

    vector<int> temp;

    // Merge the two halves in sorted order
    while (left <= mid && right <= high)
    {
        if (nums[left] <= nums[right])
        {
            temp.push_back(nums[left]);
            left++;
        }
        else
        {
            temp.push_back(nums[right]);
            right++;
        }
    }

    // Add remaining elements from the left half
    while (left <= mid)
    {
        temp.push_back(nums[left]);
        left++;
    }

    // Add remaining elements from the right half
    while (right <= high)
    {
        temp.push_back(nums[right]);
        right++;
    }

    // Copy sorted elements back into the original array
    for (int i = low; i <= high; i++)
    {
        nums[i] = temp[i - low];
    }
}

void mS(vector<int> &nums, int low, int high)
{
    if (low >= high)
    {
        return;
    }

    int mid = low + (high - low) / 2; // Calculate mid-point
    mS(nums, low, mid);               // Recursively sort the left half
    mS(nums, mid + 1, high);          // Recursively sort the right half
    merge(nums, low, mid, high);      // Merge the two sorted halves
}

vector<int> sortArray(vector<int> &nums)
{
    mS(nums, 0, nums.size() - 1); // Perform merge sort
    return nums;                  // Return the sorted array
}

int main()
{
    vector<int> arr = {8, 7, 6, 5, 4, 3, 2, 1};
    cout << "\n Unsorted Array: ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    sortArray(arr);
    cout << "\n Sorted Array: ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}