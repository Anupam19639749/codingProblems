#include <iostream>
#include <vector>
using namespace std;

bool isAnagram(string s, string t)
{
    if (s.length() != t.length())
        return false;

    vector<int> h(26);
    for (int i = 0; i < s.length(); i++)
    {
        h[s[i] - 'a']++;
    }

    for (int i = 0; i < t.length(); i++)
    {
        int x = --h[t[i] - 'a'];
        if (x < 0)
            return false;
    }
    return true;
}
int main()
{
    string s1 = "anagram";
    string t1 = "nagaram";

    string s2 = "egg";
    string t2 = "add";

    string s3 = "Anupam";
    string t3 = "Anurag";

    cout << "The given strings are anagram of each other: " << isAnagram(s1, t1) << endl;
    cout << "The given strings are anagram of each other: " << isAnagram(s2, t2) << endl;
    cout << "The given strings are anagram of each other: " << isAnagram(s3, t3) << endl;
    return 0;
}