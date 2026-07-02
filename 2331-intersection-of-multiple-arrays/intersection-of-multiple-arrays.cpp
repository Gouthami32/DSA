class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int,int>mpp;
        int row=nums.size();
        vector<int>arr;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < nums[i].size(); j++) {
                mpp[nums[i][j]]++;
            }
        }
        for(auto it:mpp){
            if(it.second==row){
                arr.push_back(it.first);
            }
        }
        return arr;
    }
};