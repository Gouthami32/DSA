class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
     vector<int>freq(101,0);
     int cnt=0;
     for(int num:nums){
        cnt+=freq[num];
        freq[num]++;

     }
     return cnt;
    }
};