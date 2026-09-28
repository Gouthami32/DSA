class Solution {
public:

    vector<int> convertToBinary(int n) {
        vector<int> ans;

        // We need exactly 32 bits
        for (int i = 0; i < 32; i++) {
            int r = n % 2;
            ans.push_back(r);
            n = n / 2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }

    int reverseBits(int n) {

        // Convert decimal to binary
        vector<int> k = convertToBinary(n);

       unsigned int decimal = 0;
       unsigned int power = 1;

        // k contains bits from right to left.
        // Reading it from beginning to end gives the reversed bits.
        for (int i = 0; i < 32; i++) {
            decimal += k[i] * power;
            power = power * 2;
        }

        return decimal;
    }
};