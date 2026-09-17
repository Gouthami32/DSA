class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x:nums){
           mp[x]++;
        }
        int sum=0;
        for(auto p:mp){
            if(p.second==1){
                 sum=sum+p.first;
            }
           
        }
        return sum;
      
    }
};