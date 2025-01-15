#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string addBinaryStrings(string a, string b)
{
    string result = "";                     // Store the binary result
    int carry = 0;                          // Initialize carry
    int i = a.size() - 1, j = b.size() - 1; // Start from the last characters of both strings

    // Traverse both strings from the end
    while (i >= 0 || j >= 0 || carry)
    {
        int bitA = (i >= 0) ? a[i--] - '0' : 0; // Get bit from a, or 0 if out of range
        int bitB = (j >= 0) ? b[j--] - '0' : 0; // Get bit from b, or 0 if out of range

        int sum = bitA + bitB + carry; // Calculate sum of current bits and carry
        result += (sum % 2) + '0';     // Append the resulting bit (0 or 1) to result
        carry = sum / 2;               // Update carry (0 or 1)
    }

    reverse(result.begin(), result.end()); // Reverse the result to get the correct order
    return result;
}

int main()
{
    // Declaring string variables
    string a;
    string b;

    // Take input/test case from the user
    cout << "\n Enter the 1st and the 2nd binary string to add: ";
    cin >> a >> b;

    // Displaying the final sum of the binary strings which user has provided
    cout << "The total of the binary strings " << a << " & " << b << " is: " << addBinaryStrings(a, b) << endl;
    return 0;
}