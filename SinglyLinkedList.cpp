#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};

class SinglyLinkedList{
    private:
    Node*head;

    public:
    SinglyLinkedList(){
        head = nullptr;
    }
    ~SinglyLinkedList(){
        Node*temp = head;
        while(temp!= nullptr){
            Node*next = temp->next;
            delete temp;
            temp = next;
        }
    }
    void print(){
        Node*temp = head;
        while(temp!= nullptr){
        cout<< temp->data;
        temp = temp->next;
        cout<<" -> ";
        }
    }
    void push_front(int value){
        
    }
    

};

int main(){
    SinglyLinkedList list;

    list.print();
    return 0;
}

