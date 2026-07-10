class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        for(int i=0;i<n;i++){
         nums[j++]=nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        return nums;
        
    }
};