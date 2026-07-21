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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL)return NULL;
        vector<int>ans;
        vector<int>k;
        vector<int>l;
        ListNode* temp=head;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=0;i<ans.size();i++){
            if(i%2==0){
                k.push_back(ans[i]);

            }
            else{
                l.push_back(ans[i]);
            }
              

        }
         k.insert(k.end(), l.begin(), l.end());
        ListNode* p=new ListNode(k[0]);
        ListNode* tail=p;

        for(int i=1;i<k.size();i++){
          tail->next=new ListNode(k[i]);
          tail=tail->next;

        }
        return p;
    }
};