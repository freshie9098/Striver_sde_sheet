#include <bits/stdc++.h> 
Node *firstNode(Node *head)
{
	//    Write your code here.
    if(head==NULL||head->next==NULL)return NULL;
    Node *s = head,*f = head,*h = head;
    while(f&&f->next){
        s = s->next;
        f = f->next->next;
        if(s==f){
            break;
        }
        
    }
    if(f==NULL||f->next==NULL){
 
        return NULL;
    }
    f = head;
    while(f!=s){
        f = f->next;
        s = s->next;
    }
    return f;
    return s;
}
