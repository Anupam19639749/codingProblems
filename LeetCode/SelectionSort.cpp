#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void selectionSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
}
int main()
{
    vector<int> arr = {5, 4, 3, 2, 1, 9};
    cout << " \n Array before selection sort: ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    selectionSort(arr);
    cout << "\n Array after sorting: ";
    for (int i : arr)
    {
        cout << i << " ";
    }
}