int getNthFromLast(Node *head, int n)
{
    if (head == NULL)
        return -1;
    Node *temp = head;
    int x = 1;
    while (temp->next != NULL)
    {
        temp = temp->next;
        x++;
    }
    if (n > x)
        return -1;
    else
    {
        temp = head;
        int pos = 0;
        while (pos < (x - n))
        {
            temp = temp->next;
            pos++;
        }
        return temp->data;
    }
}