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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head||!head->next||k==0)return head;
        int cnt = 1;
        ListNode*h = head;
        while(h->next){
            cnt++;
            h = h->next;
        }
        k = k%cnt;
        ListNode*tail = h;
        h = head;
        tail->next = head;
        k = cnt-k;
        k--;
        while(k--){
            h = h->next;
            // k--;
        }
        head = h->next;
        h->next = NULL;
        return head;
            
    }
};
