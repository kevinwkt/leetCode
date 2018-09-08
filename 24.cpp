ListNode* swapPairs(ListNode* head) {
    ListNode* temp = head;
    if(temp && temp->next){
        ListNode* n = temp->next;
        temp->next = n->next;
        n->next = temp;
        head = n;
    }else return head;
    
    ListNode* prev = head->next;
    ListNode* curr = head->next->next;
    while(curr){
        if(curr->next == NULL) break;
        prev->next = curr->next;
        curr->next = prev->next->next;
        prev->next->next = curr;
        prev = curr;
        curr = curr->next;
    }
    
    return head;
}
