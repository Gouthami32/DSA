class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
             sort(nums.begin(), nums.end());
        
        int smallSum = 0;
        int largeSum = 0;
        int n = nums.size();
        
        // sum of k smallest elements
        for (int i = 0; i < k; i++) {
            smallSum += nums[i];
        }
        
        // sum of k largest elements
        for (int i = n - k; i < n; i++) {
            largeSum += nums[i];
        }
        
        return abs(largeSum - smallSum);
        
    }
};