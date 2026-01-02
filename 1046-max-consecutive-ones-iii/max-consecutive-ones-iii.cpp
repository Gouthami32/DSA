class Solution {

public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=0,count_zeros=0,n=nums.size(),ans=INT_MIN;
        while(j<n)
        {
            if(nums[j]==0)
            {
                count_zeros++;
            }
            while(count_zeros>k)
            {
                if(nums[i]==0)
                {
                    count_zeros--;
                }
                i++;

            }
            ans=max(ans,j-i+1);
            j++;

        }
        return ans;
    }
};
        