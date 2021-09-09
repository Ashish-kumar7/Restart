class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode * prev=NULL;
        ListNode * Next;
        
        ListNode * curr=head;
        
        while(curr!=NULL){
            ListNode * temp=curr;
            curr=curr->next;
            temp->next=prev;
            prev=temp;
        } 
        head=prev;
        return head;
    }
};