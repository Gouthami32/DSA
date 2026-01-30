class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.size();
        sort(s.begin(),s.end());
        string k="";
        for(int i=n-2;i>=0;i--){
           k.push_back(s[i]);
        }
       k.push_back('1');
       return k;
        
    }
};