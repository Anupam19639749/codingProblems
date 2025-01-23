#include <iostream>
using namespace std;
int titleToNumber(string columnTitle)
{
    int result = 0;
    int n = columnTitle.size();

    for (int i = 0; i < n; ++i)
    {
        // Convert character to its corresponding value (A -> 1, B -> 2, ..., Z -> 26)
        int value = columnTitle[i] - 'A' + 1;
        // Multiply by 26^(position from right)
        result = result * 26 + value;
    }
    return result;
}

int main()
{
    string str1 = "ABC";
    string str2 = "AB";
    string str3 = "ZY";
    cout << "\n String converted to column number is: " << titleToNumber(str1);
    cout << "\n String converted to column number is: " << titleToNumber(str2);
    cout << "\n String converted to column number is: " << titleToNumber(str3);
    return 0;
}