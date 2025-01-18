#include <iostream>
using namespace std;

string removeOuterParentheses(string s)
{
    string result;   // to store the final string
    int balance = 0; // to keep the track of the balance of parentheses

    // iterate through each character in the string
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            // if the balance > 0, it means this '(' is not an outermost parentheses
            if (balance > 0)
            {
                result += s[i];
            }
            balance++; // increate the balance for '('
        }
        else
        {
            balance--; // decrease the balance for ')'
            // if the balance > 0, it means this ')' id not an outermost parentheses
            if (balance > 0)
            {
                result += s[i]; // add the character to the result
            }
        }
    }
    return result; // Return the final result after removing outermost parentheses
}

int main()
{
    string s1 = "(()())(())(()(()))";
    string s2 = "(()())(())";

    cout << "The resultant string after removing outermost parentheses is: " << removeOuterParentheses(s1) << endl;
    cout << "The resultant string after removing outermost parentheses is: " << removeOuterParentheses(s2) << endl;
    return 0;
}