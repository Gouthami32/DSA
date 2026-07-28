class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;

        for(int c = 0; c < s.size(); c++) {

            if(isdigit(s[c])) {
                if(!st.empty()) {
                    st.pop();   // remove previous character
                }
            }
            else {
                st.push(s[c]);  // store characters
            }
        }

        string ans = "";

        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};