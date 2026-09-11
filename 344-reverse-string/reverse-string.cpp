class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        vector<char> res(n);

        for (int i = 0; i < n; i++) {
            res[i] = s[n - i - 1];
        }

      s=res;
    }
};