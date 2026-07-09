class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(char c:s){
            mp1[c]++;
        }
        for(char k:t){
            mp2[k]++;
        }
        return mp1==mp2;

        
    }
};