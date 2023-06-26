class Solution {
public:
    ListNode *reverse(ListNode *l3){
        ListNode *curr=l3;
        ListNode *prev=NULL;
        while(curr!=NULL){
            ListNode *next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    ListNode *insertAtBegin(ListNode* l3,int x){
        ListNode *temp=new ListNode(x);
        temp->next=l3;
        return temp;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverse(l1);
        l2=reverse(l2);
        ListNode *temp1=l1;
        ListNode *temp2=l2;
        ListNode *l3=NULL;
        int num1=0,num2=0;
        int rem=0,x1,x2,x3;
        while(temp1!=NULL || temp2!=NULL){
            if(temp1==NULL) x1=0;
            else x1=temp1->val;
            if(temp2==NULL) x2=0;
            else x2=temp2->val;
            if(rem==1){
                x3=x1+x2+rem;
                rem=0;}
            else x3=x1+x2;
            if(x3>9){
                rem=1;
                x3=x3-10;
            }
            l3=insertAtBegin(l3,x3);
            
            if(temp1!=NULL)
            temp1=temp1->next;
            
            if(temp2!=NULL)
            temp2=temp2->next;
            
        }
        if(rem==1) l3=insertAtBegin(l3,1);
        
        return l3;
    }
};
