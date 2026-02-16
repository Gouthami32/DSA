class Solution {
public:
    bool isPalindrome(int x) {
        
   if(x < 0) return false;   // negative numbers are not palindrome
        
        string k = to_string(x);  // convert integer to string
        
        int i = 0;
        int j = k.size() - 1;
        
        while(i < j){
            if(k[i] != k[j]){
                return false;
            }
            i++;
            j--;
        }
        
        return true;
        
    }
};