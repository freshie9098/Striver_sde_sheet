Node *rotate(Node *head, int k) {
     // Write your code here.
    if(!head||!head->next||k==0)return head;
        int cnt = 1;
        Node*h = head;
        while(h->next){
            cnt++;
            h = h->next;
        }
        k = k%cnt;
        Node*tail = h;
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
