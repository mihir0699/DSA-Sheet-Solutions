void inorder(Node *root, map<int, int> &m)
{
    if (root == NULL)
        return;
    inorder(root->left, m);
    m[root->data] = 1;
    inorder(root->right, m);
}

int countPairs(Node *root1, Node *root2, int x)
{
    // Code here
    map<int, int> m1, m2;
    int count = 0;
    inorder(root1, m1);
    inorder(root2, m2);
    for (auto i : m2)
    {
        if (i.first <= x)
        {
            if (m1[x - i.first] == 1)
                count++;
        }
    }
    return count;
}