Node *removeDuplicates(Node *root)
{
    // your code goes here
    Node *temp = root;
    Node *prev = new Node(-1);
    while (temp != NULL)
    {
        if ((temp->data) == (prev->data))
        {
            prev->next = temp->next;
        }
        else
            prev = temp;
        temp = temp->next;
    }
    return root;
}