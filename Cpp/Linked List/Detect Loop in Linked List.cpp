bool detectLoop(Node* head)
{
    // your code here
    Node* first=head;
    Node* second = head->next->next;
    while(second && second->next!=NULL)
    {
        if(first==second)
        return true;
        first= first->next;
        second = second->next->next;
    }
    return false;
}