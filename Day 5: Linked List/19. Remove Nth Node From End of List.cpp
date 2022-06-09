class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL)return NULL;
        ListNode*h = head;
        while(n--){
            h = h->next;
        }
        if(h==NULL)return head->next;
        // if(h)
        ListNode*h1 = head;
        ListNode*prev = head;
        while(h){
            prev = h1;
            h1 = h1->next;
            h = h->next;
        }
        prev->next = prev->next->next;
        h1->next = NULL;
        return head;
    }
};
