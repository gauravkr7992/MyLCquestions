
class Solution {
public:
ListNode* reverse(ListNode* head, int k,int count) {
        ListNode* num=head;
        ListNode* nxt;
        ListNode* prev=NULL;
        int c=0;
        ListNode* curr=head;
        if(count-k>=0){
        while(curr!=NULL&&c<k){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
            c++;
            count--;
        }
        
        if(nxt!=NULL){
            head->next=reverse(nxt, k,count);
        }
        }
        else {
            prev=head;
        }
         return prev;
        

    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* num=head;
        int count=0;
        while(num!=NULL){
             count++;
             num=num->next;
        }
        return reverse(head,k,count);

    }
};
