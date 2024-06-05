// https://leetcode.com/problems/maximum-subarray/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxi = nums[0];
        for(int i=0;i<nums.size();i++){
            sum +=nums[i];
            maxi = max(maxi, sum);
            if(sum<0)
                sum = 0;
        }
    return maxi;
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

    int ans = solution.maxSubArray(nums);
    cout << "Max sum is "<< ans << endl;
    
    return 0;
}
