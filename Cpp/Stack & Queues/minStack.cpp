#include <bits/stdc++.h>
using namespace std;
class Stack{
 public:
  stack<int> s;
  int minelement = INT_MAX;
  void push(int data){
      if(s.empty()){
          s.push(data);
          minelement = data;
          return ;
      }
      if(data<minelement){
          minelement = data;
          s.push(2*data-minelement);
      }
      else s.push(data);
  }
  int getmin(){
      return minelement;
  }
  int top(){
      return s.top();
  }
  void pop(){
      int curr = s.top();
      if(curr<minelement){
          minelement = 2*minelement-curr;
      }
      s.pop();
  }
};

int main() {
    Stack st;
    st.push(5);
    st.push(2);
    cout<<st.top()<<endl;
    st.push(1);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    return 0;
}
