LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    if(head==NULL)return NULL;
    LinkedListNode<int> *curr = head;
    LinkedListNode<int> *prev = NULL;
    while(curr){
        LinkedListNode<int> *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
    }
