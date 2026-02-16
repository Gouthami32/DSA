class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
            sort(nums.begin(), nums.end());  // Step 1: Sort

    long long total = 0;   // Sum of current window
    int left = 0;
    int maxFreq = 0;

    for (int right = 0; right < nums.size(); right++) {
        
        total += nums[right];  // Add current element to window sum

        // Check if cost exceeds k
        while ((long long)nums[right] * (right - left + 1) - total > k) {
            total -= nums[left];  // Remove left element
            left++;
        }

        // Update maximum frequency
        maxFreq = max(maxFreq, right - left + 1);
    }

    return maxFreq;
    }
};