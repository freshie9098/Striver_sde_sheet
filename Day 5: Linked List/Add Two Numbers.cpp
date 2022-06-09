class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
       
        ListNode*dummy = new ListNode(0);
         ListNode*h = dummy;
        while(l1||l2||carry){
            int sum = 0;
            if(l1){
                sum+=l1->val;
                l1 = l1->next;
            }
            if(l2){
                sum+=l2->val;
                l2 = l2->next;
            }
            sum+=carry;
             ListNode*node = new  ListNode(sum%10);
            carry = sum/10;
            h->next = node;
            h = h->next;
        }
        return dummy->next;
    }
};
