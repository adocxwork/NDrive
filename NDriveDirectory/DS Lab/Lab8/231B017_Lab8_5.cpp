SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    SinglyLinkedListNode* temp = llist;
    for(int i=0; i<position-1; i++){
        temp = temp -> next;
    }
    if(temp->next != nullptr)
    temp -> next = temp->next->next;
    else
     temp->next = nullptr;
     return llist;
}
