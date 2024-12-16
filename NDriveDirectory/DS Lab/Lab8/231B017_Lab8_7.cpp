DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    DoublyLinkedListNode* newNode = new DoublyLinkedListNode(data);
    if (!llist) {
        return newNode;
    }
    if (data <= llist->data) {
        newNode->next = llist;
        llist->prev = newNode;
        return newNode;
    }
    DoublyLinkedListNode* current = llist;
    while (current->next && current->next->data < data) {
        current = current->next;
    }
    newNode->next = current->next;
    newNode->prev = current;
    if (current->next) {
        current->next->prev = newNode;
    }
    current->next = newNode;
    return llist;
}