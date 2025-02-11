#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k) {
    // Map to store the last seen index for each value in nums
    unordered_map<int, int> lastIndex;
    
    // Iterate over the array
    for (int i = 0; i < nums.size(); ++i) {
        // Check if the current number has been seen before
        if (lastIndex.find(nums[i]) != lastIndex.end()) {
            // If the difference between indices is at most k, return true
            if (i - lastIndex[nums[i]] <= k) {
                return true;
            }
        }
        // Update the last seen index for nums[i]
        lastIndex[nums[i]] = i;
    }
    
    // No such pair found, return false
    return false;
}

// Test the function with sample inputs
int main() {
    vector<int> nums1 = {1, 2, 3, 1};
    int k1 = 3;
    cout << "Test 1: " << (containsNearbyDuplicate(nums1, k1) ? "true" : "false") << endl; // Expected: true

    vector<int> nums2 = {1, 0, 1, 1};
    int k2 = 1;
    cout << "Test 2: " << (containsNearbyDuplicate(nums2, k2) ? "true" : "false") << endl; // Expected: true

    vector<int> nums3 = {1, 2, 3, 1, 2, 3};
    int k3 = 2;
    cout << "Test 3: " << (containsNearbyDuplicate(nums3, k3) ? "true" : "false") << endl; // Expected: false

    return 0;
}