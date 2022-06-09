class Solution {
public:
    bool hasCycle(ListNode *head) {
     if(!head||!head->next)return 0;
        ListNode *s = head;
        ListNode *f = head;
        do{
            s = s->next;
            f = f->next->next;
        }while(f && f->next && s!=f);
        
        return s==f;
    }
};
