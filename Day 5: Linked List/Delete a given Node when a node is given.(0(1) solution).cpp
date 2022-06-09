class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* h = node;
        ListNode*prev = NULL;
            
        while(h->next){
            prev = h;
            h->val = h->next->val;
            h = h->next;
        }
        prev->next = NULL;
        
    }
};
