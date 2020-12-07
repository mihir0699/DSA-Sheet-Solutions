vector<int> v;
int i = 0;
void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    v.push_back(root->data);
    inorder(root->right);
}

void placeNode(Node *root)
{
    if (root == NULL)
        return;
    placeNode(root->left);
    root->data = v[i++];
    placeNode(root->right);
}
Node *binaryTreeToBST(Node *root)
{
    //Your code goes here
    i = 0;
    v.clear();
    inorder(root);
    sort(v.begin(), v.end());
    placeNode(root);
    return root;
}