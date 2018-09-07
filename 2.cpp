ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	ListNode temp(0);
    ListNode* p = &temp;

    int n = 0;

    while(l1 || l2) {
        int val = n + (l1 ? l1->val : 0) + (l2 ? l2->val : 0);
        n = val / 10;
        val = val % 10;
        p->next = new ListNode(val);
        p = p->next;
        if(l1) {
            l1 = l1->next;
        }
        if(l2) {
            l2 = l2->next;
        }
    }
    
    if(n != 0) {
        p->next = new ListNode(n);
        p = p->next;
    }
    
	return temp.next;
 }
