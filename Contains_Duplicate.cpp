// https://leetcode.com/problems/contains-duplicate/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> visited;
        for(int num : nums) {
            if(visited.count(num)) return true;
            visited.insert(num);
        }
        return false;
    }
};

int main() {
    Solution solution;
    int n;

    cout << "Enter the number of elements in the vector: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the vector: ";
    for(int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    if(solution.containsDuplicate(nums)) {
        cout << "The vector contains duplicates." << endl;
    } else {
        cout << "The vector does not contain duplicates." << endl;
    }

    return 0;
}
