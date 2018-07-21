node* reverse(node* head){
    node* current;
    node* prev;
    node* next;

    current = head;
    prev = NULL;
    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;
    return head;
}
