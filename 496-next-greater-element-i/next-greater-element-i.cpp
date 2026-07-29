class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n = nums1.size();
        int m = nums2.size();

        for (int i = 0; i < n; i++) {
            bool found = false;

            for (int j = 0; j < m; j++) {
                if (nums1[i] == nums2[j]) {

                    // Search to the right for the next greater element
                    for (int k = j + 1; k < m; k++) {
                        if (nums2[k] > nums2[j]) {
                            ans.push_back(nums2[k]);
                            found = true;
                            break;
                        }
                    }

                    if (!found)
                        ans.push_back(-1);

                    break; // Stop searching after finding nums1[i] in nums2
                }
            }
        }

        return ans;
    }
};
