 ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
            return head;
        if(head->next==NULL)
            return head;
        ListNode* curr=head;
        while(curr!=NULL){
            if((curr->next!=NULL)&&(curr->val==curr->next->val))
            {ListNode* temp=curr->next;
            curr->next=curr->next->next;
            temp->next=NULL;
            delete temp;}
            else
            {
                curr=curr->next;
            }
        }
        return head;
    }