
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_set<int> s;
        unordered_map<int, int> mp;
        for(int i=0; i<arr.size(); i++) mp[arr[i]]++;
        for(auto m : mp) s.insert(m.second);
        return (s.size()==mp.size()) ? true : false;
    }
};
        