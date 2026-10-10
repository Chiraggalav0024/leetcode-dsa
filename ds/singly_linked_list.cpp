#include<iostream>
using namespace std;

class SinglyLinkedList{
    private:
    struct Node{
        int data;
        Node * next;
   
    Node(int value){
        data = value;
        next = nullptr;
    }
    };
    Node* head;
    int sz;

    public:
    SinglyLinkedList(){
        head = nullptr;
        sz = 0;
    }
    ~SinglyLinkedList(){
        clear();
    }

    void push_front(int value){
        Node* newNode = new Node(value);
        newNode -> next = head;
        head = newNode;
        sz++;
    }
    void pop_front(){
        if(head == nullptr){
            cout<< "Empty list!"<< endl;
        return;
        }
        Node*temp = head;
        head = head->next;
        delete temp;
        sz--;
    }
    
    void push_back(int value){
        Node* newNode = new Node(value);
        if (head == nullptr){
            head = newNode;
            sz++;
            return;
        }
        Node*temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newNode;
        sz++;
    }

    void pop_back(){
        Node *temp = head;
        if(head == nullptr){
            cout << "Empty list!"<< endl;
            return;
        }
        else if(head-> next == nullptr){
            delete temp;
            head = nullptr;
            sz--;
            return;
        }
        
        while (temp->next->next != nullptr){
            temp = temp-> next;
            
        }
        delete temp->next;
        temp->next = nullptr;
        sz--;
    }

    void insert_at(int pos, int value){
        if(pos<0 || pos > sz){
            cout<< "invalid position!"<< endl;
            return;
        }
        if(pos == 0){
            push_front(value);
            return;
        }
        Node* newNode = new Node(value);
        Node*temp = head;
        for(int i=0; i<pos-1; i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        sz++;
    }

    void erase_at(int pos){
       if (pos < 0 || pos >= sz) {
    cout << "Invalid position!" << endl;
    return;
}

if (pos == 0) {
    pop_front();
    return;
}
        Node*temp= head;
        for (int i=1; i<pos; i++){
            temp = temp->next;
        }
        Node* toDelete = temp -> next;
        temp->next = temp->next->next;
        delete toDelete;
        
        sz--;
    }


    void clear(){
        Node*temp = head;
        while(temp != nullptr){
            head = head->next;
            delete temp;
            temp = head;
           
        }
         sz = 0;
    }

    void print(){
        Node*temp = head;
        while(temp != nullptr){
            cout << temp -> data << "->";
            temp = temp->next;
        }
        cout <<" size: "<< sz << endl;
    }

    int size (){
        return sz;
    }

};


    int main(){
        SinglyLinkedList f_list;
        f_list.push_front(10);
        f_list.push_front(5);
        f_list.push_front(20);
        f_list.print();
        f_list.pop_front();
        f_list.print();
        f_list.push_back(20);
        f_list.print();
        f_list.push_back(30);
        f_list.print();
        f_list.insert_at(2,15);
        f_list.print();
        f_list.erase_at(3);
        f_list.print();
        

        return 0;
    }