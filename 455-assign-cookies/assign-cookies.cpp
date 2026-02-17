class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        int i = 0; // child pointer
        int j = 0; // cookie pointer
        
        while(i < g.size() && j < s.size()) {
            if(s[j] >= g[i]) {
                i++;   // child satisfied
            }
            j++;       // move to next cookie
        }
        
        return i;  
    }
};