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
    ListNode* reverseList(ListNode* head) {

        if(head == NULL)
            return NULL;

        stack<int> st;

        ListNode* temp = head;

        while(temp != NULL){
            st.push(temp->val);
            temp = temp->next;
        }

        ListNode* newhead = new ListNode(st.top());
        st.pop();

        ListNode* tail = newhead;

        while(!st.empty()){
            tail->next = new ListNode(st.top());
            st.pop();
            tail = tail->next;
        }

        return newhead;
    }
};