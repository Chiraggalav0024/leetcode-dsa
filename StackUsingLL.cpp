#include<iostream>
using namespace std;

class Stack{
    private:
   struct Node{
    int data;
    Node* next;
   

   Node(int val){
    data = val;
    next = nullptr;
   }
   };

   Node * top;
   int count;

   public:
   Stack(){
    top = nullptr;
    count = 0;
   }

   void push(int x){
    Node * newNode = new Node(x);
    newNode->next = top;
    top = newNode;
    count++;
    
   }

   void pop(){
    if(top == nullptr){
        cout <<"Stack Underflow"<< endl;
        return;
    }
    Node * temp = top;
    top = top-> next;
    delete temp;
    count --;
    
   }

   int peek(){
    if (top == nullptr){
        cout <<"Stack is empty"<< endl;
        return -1;
    }
    return top->data;
   }

   bool empty(){
    return top == nullptr;
   }

   void clear(){
    
    while (top != nullptr){
        Node * temp = top;
        top = top -> next;
        delete temp;
    }
    count = 0;
   }

   int size(){
    return count;
   }


};

int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);

    while(!st.empty()){
        cout << st.peek() << " ";
        st.pop();
    }
    cout << endl;
    
    st.pop();
    

    st.push(100);
    st.push(200);
    cout << st.peek()<< endl;
    
  

    st.clear();

    cout << st.empty()<< endl;
    return 0;
}