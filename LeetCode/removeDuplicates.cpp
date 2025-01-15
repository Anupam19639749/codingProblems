#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int n = nums.size();
    int k = 1;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] != nums[i - 1])
        {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}
int main()
{
    vector<int> nums;
    int size;
    int element;
    cout << "\n Enter the size of array: ";
    cin >> size;
    cout << "\n Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        nums.push_back(element);
    }
    int total_duplicates = removeDuplicates(nums);
    cout << "\n Total Number of Unique elements in the array is: " << total_duplicates << endl;
    return 0;
}