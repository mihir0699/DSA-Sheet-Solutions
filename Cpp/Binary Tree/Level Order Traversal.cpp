vector<int> levelOrder(Node *node)
{
    vector<int> v;
    if (node == NULL)
        return v;
    else
    {
        queue<Node *> q;
        q.push(node);
        while (!q.empty())
        {
            Node *n = q.front();
            q.pop();
            v.push_back(n->data);
            if (n->left != NULL)
                q.push(n->left);
            if (n->right != NULL)
                q.push(n->right);
        }
        return v;
    }
}