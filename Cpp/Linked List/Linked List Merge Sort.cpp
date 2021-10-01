void Split(Node* head, Node** a, Node** b) 
{ 
    Node* fast = head->next; 
    Node* slow = head;
    
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    
  
    *a = head; 
    *b = slow->next; 
    slow->next = NULL; 
} 

Node *SortedMerge(Node *a, Node *b)
{
    if(a == NULL)
    {
        return b;
    }
    
    if(b == NULL)
    {
        return a;
    }
    
    Node *head = NULL, *tail = NULL;
    if(a->data < b->data)
    {
        head = tail = a;
        a = a->next;
    }
    else
    {
        head = tail = b;
        b = b->next;
    }
    
    while(a != NULL && b != NULL)
    {
        if(a->data < b->data)
        {
            tail->next = a;
            tail = a;
            a = a->next;
        }
        else
        {
            tail->next = b;
            tail = b;
            b = b->next;
        }
    }
    
    if(a == NULL)
    {
        tail->next = b;
    }
    else
    {
        tail->next = a;
    }
    
    return head;
}

void MergeSort(Node **headRef)
{
    Node* head = *headRef; 
    
    if ((head == NULL) || (head->next == NULL)) { 
        return; 
    } 
  
    Node* a, * b;
    Split(head, &a, &b); 
  
    MergeSort(&a); 
    MergeSort(&b); 
  
    *headRef = SortedMerge(a, b); 
}

Node* mergeSort(Node* head) 
{
    MergeSort(&head);
    
    return head;
}