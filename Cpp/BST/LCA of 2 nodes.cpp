Node* solve(Node* root, int n1, int n2)
{
    while(root!=NULL)
    {
        if(n1<root->data&& n2<root->data)
        root=root->left;
        else if(root->data<n1 && n2>root->data)
        root=root->right;
        else
        break;
    }
    return root;
    
}
Node* LCA(Node *root, int n1, int n2)
{
   //Your code here
   int x = min(n1, n2), y = max(n1, n2);
   return solve(root, n1, n2);
}