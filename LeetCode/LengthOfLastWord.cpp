#include <iostream>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int size = s.size();
        int ans = 0;
        for (int i = size - 1; i >= 0; i--)
        {
            // Skip trailing spaces at the end
            if (s[i] == ' ' && ans == 0)
            {
                continue;
            }
            // Count characters of the last word
            if (s[i] != ' ')
            {
                ans++;
            }
            else
            {
                // Break when we encounter a space after counting the last word
                break;
            }
        }
        return ans;
    }
};

int main()
{
    Solution solution;
    string sentence = " ";
    cout << "Enter any string: ";
    getline(cin, sentence);
    int length_of_last_word = solution.lengthOfLastWord(sentence);
    cout << "Length of the last word is: " << length_of_last_word << endl;
    return 0;
}
