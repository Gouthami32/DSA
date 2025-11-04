class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        for(char &a:ransomNote){
            m1[a]++;
        }
        for(char &a:magazine){
            m2[a]++;
        }
        for(char &a:ransomNote){
            if(m1[a]>m2[a]){
                return false;
            }
        }
        return true;
        
    }
};