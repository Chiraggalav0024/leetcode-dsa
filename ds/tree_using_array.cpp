#include <iostream>
using namespace std;

class Tree{
    private:
    struct Node(){
        int data;
        Node* left;
        Node* right;

        Node(int value){
            data = value;
            left = nullptr;
            right = nullptr;
        }
    };

    Node* root;

    public:
    Tree(){
        root = nullptr;
    }

    ~Tree(){
        clear();
    }

    void insert(Node*&root, int value){
        if(root == nullptr){
            root->data = value;
        }
        if(value < root->left->data){
            
        }
    }

};

int main(){

    
    return 0;
}