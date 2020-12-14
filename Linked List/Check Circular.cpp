bool isCircular(Node *head)
{
   // Your code here
   if(head==NULL)
   return false;
   Node*temp=head;
   while(temp->next!=head && temp->next!=NULL)
   {
       temp=temp->next;
   }
   if(temp->next==NULL)
    return false;
   return true;
}