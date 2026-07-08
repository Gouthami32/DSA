class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>st;
        for(auto s:nums){
            if(st.count(s)){
                return true;
            }
            st.insert(s);
            
        }
        return false;
       
        
    }
};