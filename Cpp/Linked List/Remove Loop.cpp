void removeLoop(Node *head)
{
    // code here
    // just remove the loop without losing any nodes
    bool flag = false;
    Node *slow = head, *fast = head, *prev;
    while (fast != NULL && fast->next != NULL)
    {
        prev = slow;

        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            flag = true;
            break;
        }
    }
    if (flag == true)
    {
        if (slow == head)
        {
            prev->next = NULL;
            return;
        }
        fast = head;
        while (slow->next != fast->next)
        {
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = NULL;
    }
}