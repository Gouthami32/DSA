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
    ListNode* partition(ListNode* head, int x) {
        vector<int> v;
        ListNode* temp = head;
        while (temp) {
            if (temp->val < x) v.push_back(temp->val);
            temp = temp->next;
        }

        temp = head;
        while (temp) {
            if (temp->val >= x) v.push_back(temp->val);
            temp = temp->next;
        }

        ListNode* Head;
        ListNode* Tail;
        Head = Tail = NULL;

        for (int i = 0; i < v.size(); i++) {
            if (Head == NULL) {
                ListNode* newNode = new ListNode(v[i]);
                Head = newNode;
                Tail = newNode;
            }else{
                ListNode* newNode = new ListNode(v[i]);
                Tail->next = newNode;
                Tail = newNode;
            }
        }

        return Head;
        
        
    }
};