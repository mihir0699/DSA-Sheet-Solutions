#include <bits/stdc++.h>
using namespace std;
class LRUCache{
 public:
 class node{
  public:
  int key;
  int val;
  node* prev;
  node* next;
  node(_key,_val){
      key = _key;
      val = _val;
      prev = NULL;
      next = NULL;
  }
 };
 int cap;
 unordered_map<int,node*> m;
 node* head;
 node* tail;
 LRUCache(int capacity){
  capacity = cap;
  head = new node(-1);
  tail = new node(-1);
  head->next = tail;
  tail->prev = head;
 }
 void addnode(node* Node){
     node* temp = head->next;
     Node->next = temp;
     temp->prev = Node;
     head->next = Node;
     Node->prev = head;
 }
 void deletenode(node* Node){
     node* delprev = Node->prev;
     node* delnext = Node->next;
     delprev->next = delnext;
     delnext->prev = delprev;
 }
 int get(int k){
     if(m.find(k)!=m.end()){
         node* curr = m[k];
         int res = curr->val;
         m.erase(k);
         deletenode(curr);
         addnode(curr);
         m[k] = head->next;
         return res;
     }
     else return -1;
 }
 void add(int key,int val){
     if(m.find(key)!=NULL){
         node* temp = m[key];
         deletenode(temp);
         m.erase(key);
     }
     if(m.size()==cap){
         deletenode(tail->prev);
         m.erase(tail->prev->val);
     }
     addnode(new node(key,val));
     m[key] = head->next;

 }
};
int main(){
    LRUCache cache(2);
    cache.add(1,1);
    cache.add(2,2);
    cout<<cache.get(1)<<endl;
    cache.add(3,3);
    cout<<cache.get(2)<<endl;
    cache.add(4,4);
    cout<<cache.get(1)<<endl;
    cout<<cache.get(3)<<endl;
    cout<<cache.get(4)<<endl;
    return 0;
}