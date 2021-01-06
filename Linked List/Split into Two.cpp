void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    Node *slow = head, *fast = head;

    while (fast->next != head && fast->next->next != head)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    *head1_ref = head;
    *head2_ref = slow->next;

    Node *temp = slow->next;

    slow->next = head;

    Node *curr = *head2_ref;

    while (curr->next != head)
    {
        curr = curr->next;
    }

    curr->next = *head2_ref;
}