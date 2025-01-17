#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bubbleSort(vector<int> &arr)
{
    // Your code here
    bool swapped = false;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
            swapped = true;
        }
        if (swapped == false)
        {
            break;
        }
    }
}
int main()
{
    vector<int> arr = {5, 4, 3, 2, 1, 9};
    cout << " \n Array before Bubble sort: ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    bubbleSort(arr);
    cout << "\n Array after sorting: ";
    for (int i : arr)
    {
        cout << i << " ";
    }
}