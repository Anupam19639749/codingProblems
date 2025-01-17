#include <iostream>
#include <vector>
using namespace std;

vector<int> findUnion(const vector<int> &a, const vector<int> &b)
{
    vector<int> result;
    int i = 0, j = 0;

    // Traverse both arrays
    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
        {
            // Add distinct element from a
            if (result.empty() || result.back() != a[i])
            {
                result.push_back(a[i]);
            }
            i++;
        }
        else if (b[j] < a[i])
        {
            // Add distinct element from b
            if (result.empty() || result.back() != b[j])
            {
                result.push_back(b[j]);
            }
            j++;
        }
        else
        {
            // Add common element once
            if (result.empty() || result.back() != a[i])
            {
                result.push_back(a[i]);
            }
            i++;
            j++;
        }
    }

    // Add remaining elements from a
    while (i < a.size())
    {
        if (result.empty() || result.back() != a[i])
        {
            result.push_back(a[i]);
        }
        i++;
    }

    // Add remaining elements from b
    while (j < b.size())
    {
        if (result.empty() || result.back() != b[j])
        {
            result.push_back(b[j]);
        }
        j++;
    }

    return result;
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {1, 2, 3, 6, 7};

    vector<int> unionResult = findUnion(a, b);

    for (int num : unionResult)
    {
        cout << num << " ";
    }
    return 0;
}
