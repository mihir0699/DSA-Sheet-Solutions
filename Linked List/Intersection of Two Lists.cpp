int intersectPoint(Node *head1, Node *head2)
{
    // Your Code Here
    Node *temp1 = head1, *temp2 = head2;
    if (head1 == NULL || head2 == NULL)
        return -1;
    else
    {
        while (temp1 != temp2)
        {
            temp1 = temp1 == NULL ? head2 : temp1->next;
            temp2 = temp2 == NULL ? head1 : temp2->next;
        }
        if (temp1 == NULL)
            return -1;
        else
            return temp1->data;
    }
}
