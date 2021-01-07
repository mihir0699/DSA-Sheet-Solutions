Node *solve(int pre[], int min, int max, int n, int &index)
{
    if (index >= n || min > max)
        return NULL;
    if (pre[index] < min || pre[index] > max)
    {
        return NULL;
    }
    int val = pre[index];
    Node *temp = newNode(val);
    index++;
    temp->left = solve(pre, min, val - 1, n, index);
    temp->right = solve(pre, val + 1, max, n, index);
    return temp;
}

Node *constructTree(int pre[], int size)
{
    //code here
    int i = 0;
    Node *root = solve(pre, INT_MIN, INT_MAX, size, i);
    return root;
}