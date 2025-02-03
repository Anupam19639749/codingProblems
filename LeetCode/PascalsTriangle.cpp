#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> triangle(numRows);

    for (int i = 0; i < numRows; i++)
    {
        triangle[i].resize(i + 1, 1); // Resize and initialize with 1

        for (int j = 1; j < i; j++)
        {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    return triangle;
}

int main()
{
    int numRows;
    cout << "Enter number of rows: ";
    cin >> numRows;

    vector<vector<int>> result = generate(numRows);

    for (const auto &row : result)
    {
        for (int num : row)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
