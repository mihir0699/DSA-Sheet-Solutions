/*
Structure of the node of the binary search tree is as
struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};
*/

// your task is to complete the below function
int findMin(Node *root)
{
    if (root == NULL)
        return -1;
    if (root->left != NULL)
        return findMin(root->left);
    else
        return root->data;
}

int minValue(Node *root)
{
    return findMin(root);
}