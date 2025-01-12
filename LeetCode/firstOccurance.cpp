#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int n = haystack.size();
        int m = needle.size();

        if (m == 0)
            return 0; // If the needle is empty, return 0

        if (haystack == needle)
            return 0; // If the needle and the haystack are same

        // Loop through the haystack
        for (int i = 0; i < n - m + 1; i++)
        {
            // Check if substring matches needle
            if (haystack.substr(i, m) == needle)
            {
                return i; // found the needle
            }
        }
        return -1; // Needle not found
    }
};

int main()
{
    Solution solution;
    // test case 1;
    // string haystack = "sadbutsad";
    // string needle = "sad";

    // test case 2;
    string haystack = "abc";
    string needle = "c";

    int answer = solution.strStr(haystack, needle);
    cout << "The Index of the First Occurrence in a String is: " << answer;
    return 0;
}
