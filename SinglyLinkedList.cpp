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
        Node*a = new Node(value);
        a->next = head->next;
        head = a;
        
    }
    

};

int main(){
    SinglyLinkedList list;
    list.push_front(30);
    list.push_front(20);
    list.push_front(10);
    list.print();
    return 0;
}

