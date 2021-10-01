Node * removeDuplicates( Node *head) 
{
 unordered_map<int, int> m;
  Node*temp= head;
    Node*prev= new Node(-1);
    while(temp!=NULL)
    {
        if(m[temp->data]==1)
        {
            prev->next = temp->next;
        }
        else
        {
            prev = temp;
            m[temp->data]=1;
        }

        temp = temp->next;
    }
    return head;

}
