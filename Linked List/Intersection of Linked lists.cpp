Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    set<int>s;
    Node*temp = head1;
    while(temp)
    {
        s.insert(temp->data);
        temp = temp->next;
    }
    temp=head2;
    Node * root= new Node(-1);
    Node* temp1=root;
    map<int, int>m;
    while(temp)
    {
           if(s.find(temp->data)!=s.end() && m[temp->data]==0)
           {
              m[temp->data]=1;
           }
           temp=temp->next;
    }
    for(auto i: m)
    {
        if(temp1->data==(-1))
            {
                temp1->data = i.first;
            }
            else
            {
                Node* newNode = new Node(i.first);
                temp1->next = newNode;
                temp1=newNode;
            }
     
    }
     
       
    return root;
}