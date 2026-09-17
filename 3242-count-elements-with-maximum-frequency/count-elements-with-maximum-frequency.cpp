class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int x : nums){
            mp[x]++;
        }

        int max_freq = 0;

        // Find maximum frequency
        for(auto p : mp){
            max_freq = max(max_freq, p.second);
        }

        int result = 0;

        // Add frequencies equal to maximum frequency
        for(auto p : mp){
            if(p.second == max_freq){
                result += p.second;
            }
        }

        return result;
    }
};