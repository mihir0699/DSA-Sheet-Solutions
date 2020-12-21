Node* reverseDLL(Node * head)
{
    if(head==NULL || head->next==NULL)
    return head;
    else
    {
        Node *curr=head;
        while(true)
        {
            Node*temp = curr->next;
            curr->next = curr->prev;
            curr->prev = temp;
            if(curr->prev==NULL)
            return curr;
            curr = curr->prev;
        }
        
    }
}