class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        vector<int> ans;

        ListNode* temp = head;

        while(temp != NULL){
            ans.push_back(temp->val);
            temp = temp->next;
        }

        int m = ans.size();

        ans.erase(ans.begin() + (m - n));

        if(ans.empty())
            return NULL;

        ListNode* p = new ListNode(ans[0]);
        ListNode* tail = p;

        for(int i = 1; i < ans.size(); i++){
            tail->next = new ListNode(ans[i]);
            tail = tail->next;
        }

        return p;
    }
};