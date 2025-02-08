#include <iostream>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        
        while (n != 1 && seen.find(n) == seen.end()) {
            seen.insert(n);
            n = sumOfSquares(n);
        }
        
        return n == 1;
    }

private:
    int sumOfSquares(int num) {
        int sum = 0;
        while (num > 0) {
            int digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }
        return sum;
    }
};

int main() {
    Solution sol;
    cout << boolalpha; // Prints true/false instead of 1/0
    cout << sol.isHappy(19) << endl; // Output: true
    cout << sol.isHappy(2) << endl;  // Output: false
    return 0;
}
