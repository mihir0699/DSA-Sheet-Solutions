void mirror(Node* node) 
{
     queue<Node*>q;
     q.push(node);
     while(!q.empty())
     {
         Node*temp = q.front();
         q.pop();
         Node*temp1 = temp->left;
         temp->left =  temp->right;
         temp->right = temp1;
         if(temp->right!=NULL)
         q.push(temp->right);
         if(temp->left!=NULL)
         q.push(temp->left);
         
     }
}