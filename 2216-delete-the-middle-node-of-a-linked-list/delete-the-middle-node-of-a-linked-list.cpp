/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL)return NULL;
        vector<int>ans;
        ListNode* temp=head;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        int n=ans.size();
        
        ans.erase(ans.begin()+n/2);
        if(ans.empty()) return NULL;
        ListNode* p=new ListNode(ans[0]);
        ListNode* tail=p;
        for(int i=1;i<ans.size();i++){
            tail->next=new ListNode(ans[i]);
            tail=tail->next;
        }
        return p;
        
    }
};