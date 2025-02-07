#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        // if opening brackets then push them into stack
        if (ch == '(' || ch == '[' || ch == '{')
        {
            st.push(ch);
        }
        // if closing brackets, check stacktop and pop
        else
        {
            // if empty stack
            if (st.empty())
                return false;

            // if stack is not empty
            else
            {
                char top = st.top();
                if ((ch == ')' && top == '(') ||
                    (ch == ']' && top == '[') ||
                    (ch == '}' && top == '{'))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }
    }
    if (st.empty())
        return true;

    else
        return false;
}

int main()
{
    string s;
    cout << "Enter a string of parentheses: ";
    cin >> s;

    if (isValid(s))
    {
        cout << "The string is valid.\n";
    }
    else
    {
        cout << "The string is not valid.\n";
    }

    return 0;
}