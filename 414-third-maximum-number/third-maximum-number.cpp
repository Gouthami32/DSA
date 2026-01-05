class Solution {
public:
    int thirdMax(vector<int>& nums) {

        // Step 1: Remove duplicates using set
        set<int> s(nums.begin(), nums.end());

        // Step 2: Convert set back to vector
        vector<int> v(s.begin(), s.end());

        // Step 3: Sort
        sort(v.begin(), v.end());

        int n = v.size();

        // Step 4: Check count
        if (n >= 3)
            return v[n - 3];   // third maximum
        else
            return v[n - 1];   // maximum
    }
};
