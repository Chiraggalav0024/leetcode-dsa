#include <iostream>
using namespace std;

class DoublyLinkedList{
    private:
    struct Node{
        int data;
        Node*next;
        Node*prev;

        Node(int value){
            data = value;
            next = nullptr;
            prev = nullptr;
        }
    };

    Node*head;
    Node*tail;
    int sz;

    public:
    DoublyLinkedList(){
        head = nullptr;
        tail = nullptr;
        sz = 0;
    }

    ~DoublyLinkedList(){
        clear();
    }

    void push_back(int value){
        Node*newNode = new Node(value);
        if (head == nullptr){
            head = tail = newNode;
            sz++;
            return;
        }
        Node*temp = head;
        while(temp-> next != nullptr){
            temp = temp -> next;
        }
        temp -> next = newNode;
        newNode -> prev = temp;
        tail = newNode;
        sz++;
    }

    void push_front(int value){
        Node *newNode = new Node(value);
        if (tail == nullptr){
            head  = tail = newNode;
            sz++;
            return;
        }
        newNode -> next = head;
        head-> prev = newNode;
        head = newNode;
        sz++;
    }

    void pop_front(){
        Node*temp = head;
        if(head == nullptr){
            cout << "empty list!"<< endl;
            return;
        }
        else if (head == tail){
            head = tail = nullptr;
            delete temp;
            sz--;
            return;
        }
        
        head = head->next;
        head->prev = nullptr;
        delete temp;
        sz--;
    }

    void pop_back(){
        Node*temp = tail;
        if (tail == nullptr){
            cout << "empty list!"<< endl;
            return;
        }
        else if(head == tail){
            head = tail = nullptr;
            delete temp;
            sz--;
            return;
        }
        tail = tail->prev;
        tail->next = nullptr;
        delete temp;
        sz--;
        return;
    }

    void print(){
        Node*temp = head;
        while (temp != nullptr){
            cout << temp->data << " ->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void clear(){
        Node*temp = head;
        while(temp != nullptr){
            head = head->next;
            delete temp;
            temp = head;
        }
        head = tail = nullptr;
        sz = 0;
    }

    int size(){
        return sz;
    }
};

 int main(){
        DoublyLinkedList*dll = new DoublyLinkedList();
        dll->push_back(20);
        dll->push_front(10);
        dll->push_back(30);
        dll->push_back(40);
        dll->print();

        dll->pop_back();
        dll->print();
        cout << dll->size()<< endl;

        dll->pop_front();
        dll->print();
        cout << dll->size() << endl;
        delete dll;
        return 0;
    }
