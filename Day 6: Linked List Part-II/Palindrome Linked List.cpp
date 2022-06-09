class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL)return 1;
        ListNode *s = head;
        ListNode *f = head;
        ListNode *prev = head;
        while(f->next&&f->next->next){
            prev = s;
            s = s->next;
            f = f->next->next;
            
        }
        s = s->next;
     prev = NULL;
         while(s){
                ListNode *nxt = s->next;
                s->next = prev;
                prev = s;
                s = nxt;
            }
        while(prev){
            if(head->val!=prev->val)return 0;
            prev = prev->next;
            head = head->next;
        }
        return 1;
        
        
     
    }
};
