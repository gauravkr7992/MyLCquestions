class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) return NULL;
        else if(head->next==NULL) {
            delete head;
            return NULL;
        }
        else{
            
            int len=0;
            ListNode *temp=head;
            while(temp!=NULL){
                temp=temp->next;
                len++;
            }
            ListNode *current=head;
            int val=len-n;
            for(int i=1;i<val;i++){      
                 current=current->next; 
            }
           
    // if we initialize i=1,then it will not work if length=2 and n=2
           ListNode *current2=current->next;
            if(val!=0){   
            current->next=current->next->next;
            delete current2;
            return head;
            }
            else{
                current=head->next;
                delete head;
                
                return current;
            }
        }

    }
};
