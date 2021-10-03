#include <bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node *next;
    node(int d)
    {
        val=d;
        next=NULL;
    }
};
node* head;
void printLinkedlist(){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<'\n';

}
void push(int data)
{
    node* newnode = new node(data);
    if(head==NULL){
    head = newnode;
    return;
    }
    node* temp = head;
    while(temp->next!=NULL) {
        temp = temp->next;
    }
    temp->next = newnode;
}

void oddevenseggregate(){
    node* evenStart = NULL;
    node* oddStart = NULL;
    node* evenEnd = NULL;
    node* oddEnd = NULL;
    node* curr = head;
    while(curr!=NULL){
        int val = curr->val;
        //If value at current position is odd
        if(val&1){
          if(oddStart==NULL){
              oddStart = curr;
              oddEnd = curr;
          }
        else{
            oddEnd->next = curr;
            oddEnd = oddEnd->next;
        }
        }
        else{
            if(evenStart==NULL){
                evenStart = curr;
                evenEnd=curr;
            }
            else{
                evenEnd->next = curr;
                evenEnd = evenEnd->next;
            }
        }
        curr=curr->next;
    }
    if(!oddStart or !evenStart){
        return;
    }
    evenEnd->next = oddStart;
    oddEnd->next = NULL;
    head = evenStart;


}
int main(){
head = NULL;
int n;
cin>>n;
int i = 0;
int x;
while(i<n){
    cin>>x;
    push(x);
    i++;
}
printLinkedlist();
oddevenseggregate();
printLinkedlist();
return 0;
}