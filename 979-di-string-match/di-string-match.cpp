#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size();
        int low = 0, high = n;
        vector<int> perm;

        for (char c : s) {
            if (c == 'I') {
                perm.push_back(low++);
            } else { // 'D'
                perm.push_back(high--);
            }
        }

        // One number will be left
        perm.push_back(low);  

        return perm;
    }
};
