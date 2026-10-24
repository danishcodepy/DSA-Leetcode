
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
         ListNode* dummy=new ListNode(-1);
         dummy->next=head;
         ListNode* slow = dummy;
         ListNode * fast = head;
    while(fast != NULL){
        if(fast->val == val){
            ListNode * del = fast;
            slow->next = fast->next;
            fast = fast->next;

            delete del;


        }
        else{
            slow = fast;
            fast = fast->next;
        }
    }
    return dummy->next;  
         
    }
};