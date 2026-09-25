#include<iostream>
using namespace std;

class Stack{
    private:
   struct Node(){
    int data;
    Node* next;
   } 

   Node(int val){
    data = val;
    next = nullptr;
   }

   int top;
   int count;

   public:
   Stack(){
    
   }

};