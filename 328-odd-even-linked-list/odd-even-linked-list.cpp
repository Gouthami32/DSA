class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {

            if(head == NULL)
            return NULL;

        vector<int> odd;
        vector<int> even;

        ListNode* temp = head;

        int index = 0;

        while(temp != NULL){
            if(index % 2 == 0)
                odd.push_back(temp->val);
            else
                even.push_back(temp->val);

            temp = temp->next;
            index++;
        }

        odd.insert(odd.end(), even.begin(), even.end());

        ListNode* newHead = new ListNode(odd[0]);
        ListNode* tail = newHead;

        for(int i = 1; i < odd.size(); i++){
            tail->next = new ListNode(odd[i]);
            tail = tail->next;
        }

        return newHead;
    }
};