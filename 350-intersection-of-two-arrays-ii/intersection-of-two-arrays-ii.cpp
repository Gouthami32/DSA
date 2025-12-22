class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_map<int,int>freq;
        for(int x:nums1){
            freq[x]++;
        }
        for(int x:nums2){
            if(freq[x]>0){
                ans.push_back(x);
                freq[x]--;
            }
            

        }
        
        return ans;
        
    }
};