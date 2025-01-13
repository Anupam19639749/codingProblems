#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    if (strs.empty())
        return "";

    // Start with the first string as the initial prefix
    string prefix = strs[0];

    for (int i = 1; i < strs.size(); i++)
    {
        // Compare the current prefix with the current string
        while (strs[i].find(prefix) != 0)
        {
            // Reduce the prefix until a match is found
            prefix = prefix.substr(0, prefix.length() - 1);
            if (prefix.empty())
            {
                return "";
            }
        }
    }
    return prefix;
}

int main()
{
    vector<string> strs1 = {"flower", "flow", "flight"};
    cout << "Longest common prefix: " << longestCommonPrefix(strs1) << endl;

    vector<string> strs2 = {"dog", "racecar", "car"};
    cout << "Longest common prefix: " << longestCommonPrefix(strs2) << endl;

    return 0;
}
