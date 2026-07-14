class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int min_length=INT_MAX;
        int l=0;
        int sum=0;
        for(int r=0;r<n;r++){
            sum=sum+nums[r];
            while(sum>=target){
                
            
            min_length=min(min_length,r-l+1);
            sum=sum-nums[l];
                l++;
            }
        }
        return (min_length == INT_MAX) ? 0 : min_length;
        
    }
};