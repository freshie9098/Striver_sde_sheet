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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL||head->next==NULL)return head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode*curr = NULL;
        ListNode* next = NULL;
        ListNode* pre = dummy;
        
        int cnt = 0;
        ListNode*h = head;
        while(h){
            h = h->next;cnt++;
        }
        while(cnt>=k){
            
            curr = pre->next;
            next = curr->next;
            for(int i = 1;i<k;++i){
                curr->next = next->next;
                next->next = pre->next;
                pre->next = next;
                next = curr->next;
            }
            pre = curr;
            cnt-=k;
        }
        
        return dummy->next;
        
    }
};
