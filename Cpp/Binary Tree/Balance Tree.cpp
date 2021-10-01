int height(Node *root)
{
    if (root == NULL)
        return 0;
    else
        return (1 + max(height(root->left), height(root->right)));
}

bool isBalanced(Node *root)
{
    //  Your Code here
    if (root == NULL)
        return true;
    else
    {
        int leftH = height(root->left);
        int rightH = height(root->right);
        if (abs(leftH - rightH) > 1)
            return false;
        if (!isBalanced(root->left) || !isBalanced(root->right))
            return false;
    }
    return true;
}