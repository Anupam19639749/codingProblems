#include <iostream>
#include <string>
using namespace std;

string largestOddNumber(string num)
{
    // check if the last character is odd
    if ((num[num.length() - 1] - '0') % 2 != 0)
        return num;
    int i = num.length() - 1;
    while (i >= 0)
    {
        int n = num[i] - '0'; // convert character to int
        if (n % 2 != 0)
            return num.substr(0, i + 1); // Use substr to get a substring
        i--;
    }
    return "";
}

int main()
{
    string s1 = "12345";
    string s2 = "24680";
    string s3 = "1234446";
    cout << "Largest Odd number present in the string is: " << largestOddNumber(s1) << endl;
    cout << "Largest Odd number present in the string is: " << largestOddNumber(s2) << endl;
    cout << "Largest Odd number present in the string is: " << largestOddNumber(s3) << endl;
    return 0;
}