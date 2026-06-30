class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        if (nums.empty()) return res;

        int start = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1] + 1) {
                if (start == i - 1)
                    res.push_back(to_string(nums[start]));
                else
                    res.push_back(to_string(nums[start]) + "->" + to_string(nums[i - 1]));
                start = i;
            }
        }

        // Final range
        if (start == nums.size() - 1)
            res.push_back(to_string(nums[start]));
        else
            res.push_back(to_string(nums[start]) + "->" + to_string(nums.back()));

        return res;
    }
};