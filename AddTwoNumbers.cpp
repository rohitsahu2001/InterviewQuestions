class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1&&!l2) return l1;
        if(l1&&!l2) return l1;
        if(!l1&&l2) return l2;
        ListNode *head=new ListNode(0);
        ListNode *last=head;
        int carry=0,sum=0;
        while(l1 || l2){
            sum=0;
            if(l1){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2){
                sum+=l2->val;
                l2=l2->next;
            }
            sum+=carry;
            last->next=new ListNode(sum%10);
            last=last->next;
            carry=sum/10;  
        }
        if(carry){
             last->next=new ListNode(carry);
             last=last->next;
        }
        return head->next;
    }
};
