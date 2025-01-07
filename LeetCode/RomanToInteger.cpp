#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        // Mapping Roman symbols to their integer values
        unordered_map<char, int> romanMap = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        int total = 0;
        int prevValue = 0;

        // Traverse the Roman numeral string from left to right
        for (char c : s)
        {
            int currentValue = romanMap[c];

            // Apply subtraction rule if needed
            if (currentValue > prevValue)
            {
                total += currentValue - 2 * prevValue; // Adjust for previously added value
            }
            else
            {
                total += currentValue;
            }

            // Update the previous value
            prevValue = currentValue;
        }

        return total;
    }
};

int main()
{
    string s;
    cout << "Enter Any Roman String: ";
    cin >> s;
    Solution sol;
    int answer = sol.romanToInt(s);
    cout << "Entered Roman string is equivalent to: " << answer;
    return 0;
}