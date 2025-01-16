#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> findDuplicates(vector<int> &arr)
{
    unordered_map<int, int> freq_map;
    vector<int> result;

    // Count the frequency of each element
    for (int num : arr)
    {
        freq_map[num]++;
    }
    // Find elements that appear more than once
    for (auto &pair : freq_map)
    {
        if (pair.second > 1)
        {
            result.push_back(pair.first);
        }
    }
    return result;
}

int main()
{
    vector<int> arr1 = {2, 3, 1, 2, 3};
    vector<int> arr2 = {0, 3, 1, 2};
    vector<int> arr3 = {2};

    vector<int> result1 = findDuplicates(arr1);
    vector<int> result2 = findDuplicates(arr2);
    vector<int> result3 = findDuplicates(arr3);

    // Output the results
    for (int num : result1)
    {
        cout << num << " ";
    }
    cout << endl;

    for (int num : result2)
    {
        cout << num << " ";
    }
    cout << endl;

    for (int num : result3)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}