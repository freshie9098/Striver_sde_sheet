class Solution {
public:
    ListNode *getIntersectionNode(ListNode *h1, ListNode *h2) {
        ListNode *t1 = h1,*t2 = h2;
        ListNode *h = h1;
        int cnt1 = 0,cnt2 = 0;
        while(h){
            t1 = h;
            // cout<<h->val<<" ";
            h = h->next;
            cnt1++;
        }
        cout<<endl;
        h = h2;
        while(h){
            t2 = h;
            cout<<h->val;
            cnt2++;
            h = h->next;
        }
        
        if(t1!=t2){
            return NULL;
        }
        cnt2 = cnt1-cnt2;
        if(cnt2<0){//l1<l2
            cnt2*=-1;
            while(cnt2--){
                h2 = h2->next;
            }
            while(h1!=h2){
                h1 = h1->next;
                h2 = h2->next;
                
            }
                
            return h2;
        }
        else{
            while(cnt2--){
                h1 = h1->next;
            }
            while(h1!=h2){
                h1 = h1->next;
                h2 = h2->next;
                
            }
            return h1;
            
        }
        return h1;
        
        
    }
};
