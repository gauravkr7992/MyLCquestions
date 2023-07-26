
int count=0;
class Solution {
public:
    
    Node* flatten(Node* head) {
        if(head==NULL)
        return head;
        Node* curr=head;
        Node* curr1=NULL;
         Node* curr2;
         Node* curr3;
         int count;
        while(curr!=NULL){
            if(curr->child!=NULL){
                count++;
                curr1=curr->next;
                curr->next=curr->child;
                curr->child=NULL;
                curr->next->prev=curr;
                curr3=flatten(curr->next); 
                count--;
                curr3->next=curr1;
                if(curr1!=NULL)
                curr1->prev=curr3;
            }
             curr2=curr;
             curr=curr->next;
            }
            if(count==0) {
            return head;
            }
            else
            return curr2;
     
    }
};
