Node *findMiddle(Node *head) {
    // Write your code here
    if(head==NULL||head->next==NULL)return head;
    Node *s = head;
    Node *f = head;
    while(f!=NULL&&f->next!=NULL){
        s = s->next;
        f = f->next->next;
    }
    return s;
}
