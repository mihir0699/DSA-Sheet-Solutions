vector<int>v;
void printBoundaryLeft(Node* root)
{
    if(root==NULL)
    return ;
    if(root->left)
    {
        v.push_back(root->data);
        printBoundaryLeft(root->left);
    }
    else if(root->right)
    {
        v.push_back(root->data);
        printBoundaryLeft(root->right);
    }
    
}
void printLeaves(Node* root)
{
    if(root==NULL)
    return ;
    printLeaves(root->left);
     if((root->left==NULL) && (root->right==NULL))
     v.push_back(root->data);
    printLeaves(root->right);
   
    
}

void printBoundaryRight(Node*root)
{
    if(root==NULL)
    return ;
    if(root->right)
    {
        printBoundaryRight(root->right);
        v.push_back(root->data);
        
    }
    else if(root->left)
    {
        printBoundaryRight(root->left);
         v.push_back(root->data);
   
    }
}
vector <int> printBoundary(Node *root)
{
     //Y
     v.clear();
     if(root==NULL)
     return v;
     else
     {
         v.push_back(root->data);
         printBoundaryLeft(root->left);
         printLeaves(root->left);
         printLeaves(root->right);
         printBoundaryRight(root->right);
     }
     return v;
     
}