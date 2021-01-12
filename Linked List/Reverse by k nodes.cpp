class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)
            return NULL;
        ListNode* temp = head, *prev=head;
        int c=0;
        int count=0, rotate;
        while(temp)
        {
            prev = temp;
            temp = temp->next;
            count++;
        }
        rotate = k%count;
        
        if(rotate>0)
        {    prev->next = head;
        
            temp=head;
            while(c<(count-rotate)-1)
            {
                temp = temp->next;
                c++;

            }
            prev = temp->next;
            temp->next=NULL;
            return prev;
        }
        return head;
        
        
    }
};