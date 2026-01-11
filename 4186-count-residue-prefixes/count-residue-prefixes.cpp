class Solution {
public:
    int residuePrefixes(string s) {
        unordered_set<char>st;
        int n=s.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            st.insert(s[i]);
            if(st.size()==(i+1)%3)
            cnt++;
        }
       return cnt;
        
    }
};