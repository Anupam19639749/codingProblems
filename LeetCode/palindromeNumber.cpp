/* *****************************Problem Statement:*****************************
Given an integer x, return true if x is a
palindrome, and false otherwise.

Example 1:
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.

Example 2:
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
*/

#include <iostream> // Include input-output stream library
using namespace std;

// Class definition for the solution
class Solution
{
public:
    // Function to check if a number is a palindrome
    bool isPalindrome(int x)
    {
        // Store the original number for comparison later
        int temp = x;
        int digit;      // Variable to hold individual digits
        double num = 0; // Variable to store the reversed number

        // Reverse the number
        while (temp > 0)
        {
            digit = temp % 10;      // Extract the last digit
            num = num * 10 + digit; // Append the digit to the reversed number
            temp = temp / 10;       // Remove the last digit
        }
        // Compare the reversed number with the original
        if (num == x)
            return true; // It's a palindrome
        else
            return false; // It's not a palindrome
    }
};

int main()
{
    // Create an object of the Solution class
    Solution solution;

    // Variable to hold user input
    int Num;

    // Prompt the user to enter a number
    cout << "Enter any number: ";
    cin >> Num;

    // Call the isPalindrome function using the object
    bool Ans = solution.isPalindrome(Num);

    // Display the result to the user
    if (Ans)
    {
        cout << "Number is a Palindrome Number"; // Palindrome case
    }
    else
    {
        cout << "Number is not a Palindrome Number"; // Non Palindrome case
    }
    return 0; // Indicate successful program execution
}
