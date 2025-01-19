#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int reverse(int x)
{
    int reversed = 0;
    while (x)
    {
        int digit = x % 10;

        // Check for overflow before updating reversed
        if (reversed > (INT_MAX / 10) || reversed < (INT_MIN / 10))
        {
            return 0; // Overflow
        }
        reversed = reversed * 10 + digit;
        x /= 10;
    }
    return reversed;
}

int main()
{
    int number1 = 123456, number2 = 32143, number3 = 12000;
    cout << "Testcase1: " << reverse(number1) << "\n Testcase2: " << reverse(number2) << "\n Testcase3: " << reverse(number3);
    return 0;
}