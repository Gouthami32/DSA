class Solution {
public:
vector<int> convertToBinary(int n){
    vector<int>ans;
    
    for(int i=0;i<32;i++){
      int r=n%2;
      ans.push_back(r);
      n=n/2;
    }
    return ans;
}
    int hammingWeight(int n) {
        vector<int>k=convertToBinary(n);
        
        int cnt=0;
        for(int i=0;i<32;i++){
            if(k[i]==1){
                cnt++;
            }
        }
        return cnt;
    }
};