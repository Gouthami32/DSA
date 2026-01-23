class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
       
        unordered_map<string,int>mp1,mp2;
        for(auto u:words1)mp1[u]++;
        for(auto u:words2)mp2[u]++;
        int ans=0;
        for(auto u:words1){
            if(mp1[u]==1&&mp2[u]==1)
            ans++;
        }
        return ans;
        
    }
};