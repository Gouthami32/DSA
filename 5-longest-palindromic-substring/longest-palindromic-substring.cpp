/*

    Time Complexity : O(N^3), Here three nested loop creates the time complexity. Where N is the size of the
    string(s).

    Space Complexity : O(1), Constant space.

    Solved using string(Three Nested Loop). Brute Force Approach.

    Note : this may give TLE.

*/


/***************************************** Approach 1 *****************************************/

class Solution {
private: 
    bool check(string &s, int i, int j){
        while(i<j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }            
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int starting_index = 0;
        int max_len = 0;
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                if(check(s, i, j)){
                    if(j-i+1 > max_len){
                        max_len = j-i+1;
                        starting_index = i;
                    }
                }
            }
        }
        return s.substr(starting_index, max_len);
    }
}; 











    

/***************************************** Approach 3 *****************************************/
