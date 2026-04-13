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
        if(head == NULL) return NULL;

        stack<ListNode*> st;
        ListNode* temp = head;

        // Step 1: Push nodes
        while(temp != NULL){
            st.push(temp);
            temp = temp->next;
        }

        // Step 2: Rebuild reversed list
        ListNode* newHead = st.top();
        st.pop();

        temp = newHead;

        while(!st.empty()){
            temp->next = st.top();
            st.pop();
            temp = temp->next;
        }

        temp->next = NULL;  // very important

        return newHead;
    }
};