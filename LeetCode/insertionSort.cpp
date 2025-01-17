#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void insertionSort(vector<int> &arr)
{
    // code here
    for (int i = 1; i < arr.size(); i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}
int main()
{
    vector<int> arr = {9, 8, 7, 6, 5, 4, 3};
    cout << " \n Array before Insertion sort: ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    insertionSort(arr);
    cout << "\n Array after sorting: ";
    for (int i : arr)
    {
        cout << i << " ";
    }
}