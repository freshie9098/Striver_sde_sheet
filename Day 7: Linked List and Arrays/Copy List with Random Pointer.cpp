class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head)return NULL;
        Node*h = head;
    Node* dummy = new Node(0);
        Node* root = dummy;
        // map<Node*,int>m;//node,val
        map<Node*,Node*>m1;//node,NODE
        while(h){
            // m[h] = h->val;
            Node*node = new Node(h->val);
            m1[h] = node;
            // m1[h->val] = node;
            root->next = node;
            root = root->next;
            h = h->next; 
        }
        h = head;
        root = dummy->next;
        while(h){
            if(h->random){
                root->random = m1[h->random];
            }
            h = h->next;
            root = root->next;
        }
        return dummy->next;
    }
};
