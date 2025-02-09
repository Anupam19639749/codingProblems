#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<string> findRelativeRanks(vector<int> &score)
{
    int n = score.size();
    vector<int> sortedScore = score;
    sort(sortedScore.rbegin(), sortedScore.rend()); // Sort in descending order

    unordered_map<int, string> rankMap;
    for (int i = 0; i < n; ++i)
    {
        if (i == 0)
            rankMap[sortedScore[i]] = "Gold Medal";
        else if (i == 1)
            rankMap[sortedScore[i]] = "Silver Medal";
        else if (i == 2)
            rankMap[sortedScore[i]] = "Bronze Medal";
        else
            rankMap[sortedScore[i]] = to_string(i + 1);
    }

    vector<string> result(n);
    for (int i = 0; i < n; ++i)
    {
        result[i] = rankMap[score[i]];
    }

    return result;
}

int main()
{
    vector<int> score = {10, 3, 8, 9, 4};
    vector<string> result = findRelativeRanks(score);

    for (const string &rank : result)
    {
        cout << rank << " ";
    }
    cout << endl;

    return 0;
}
