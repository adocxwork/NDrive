SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode* temp = new SinglyLinkedListNode(data);
    SinglyLinkedListNode* curr = llist;
    for(int i=0; i<position-1; i++){
        curr = curr -> next;
    }
    temp -> next = curr -> next;
    curr -> next = temp;
    return llist;
}
