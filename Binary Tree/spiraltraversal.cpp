#include <iostream>
#include <stack>
#include <queue>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
    node(int x)
    {
        data = x;
        left = right = NULL;
    }
};
node *maketree(node *root)
{
    int data;
    cout << "Enter the data: ";
    cin >> data;
    cout << endl;
    if (data == 0)
    {
        return NULL;
    }

    root = new node(data);
    cout << "Enter the left chile of " << root->data << ".\n   ";
    root->left = maketree(root->left);
    cout << "Enter the right child of " << root->data << ".\n  ";
    root->right = maketree(root->right);

    return root;
}

void spiral(node *root)
{
    bool rev = false;
    queue<node *> q;
    stack<node *> s;
    q.push(root);
    while (q.empty() == false)
    {
        int count = q.size();
        for (int i = 0; i < count; i++)
        {
            node *curr = q.front();
            if (rev)
            {
                s.push(curr);
            }
            else
            {
                cout << curr->data << " ";
            }
            q.pop();
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
        if (rev)
        {
            while (s.empty() == false)
            {
                cout << s.top()->data << " ";
                s.pop();
            }
        }
        rev = !(rev);
    }
    cout << endl;
}
void spieff(node *root)
{
    stack<node *> s1;
    stack<node *> s2;
    s1.push(root);
    while (s1.empty() == false || s2.empty() == false)
    {
        bool first = s1.empty() == true;
        int len = (first) ? s2.size() : s1.size();
        int count;
        if (first)
        {
            count = s2.size();
            for (int i = 0; i < count; i++)
            {
                node *temp = s2.top();
                s2.pop();
                cout << temp->data << " ";
                if (temp->right != NULL)
                    s1.push(temp->right);
                if (temp->left != NULL)
                    s1.push(temp->left);
            }
        }
        else
        {
            count = s1.size();
            for (int i = 0; i < count; i++)
            {
                node *temp = s1.top();
                s1.pop();
                cout << temp->data << " ";
                if (temp->left != NULL)
                    s2.push(temp->left);
                if (temp->right != NULL)
                    s2.push(temp->right);
            }
        }
    }
    cout << endl;
}

int main()
{
    node *root = NULL;
    root = maketree(root);
    spiral(root);
    spieff(root);
}