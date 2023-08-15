
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* result=new ListNode(0);
        ListNode* curr=result;
        while(list1!=NULL&&list2!=NULL){
            if(list1->val>=list2->val){
                curr->next=list2;
                list2=list2->next;
            }
            else {
                curr->next=list1;
                list1=list1->next;
            }
            curr=curr->next;
  
        }
        if(list2!=NULL){
            curr->next=list2;
                
        }
        if(list1!=NULL){
            curr->next=list1;
               
        }
     return result->next;
    }
};
