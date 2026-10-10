#include <iostream>
using namespace std;

class Stack{
    private:
    int arr[100];
    int topindex;

    public:
    Stack(){
        topindex = -1;
    }

    void push(int x){
        if (topindex == 99){
            cout << "Stack overflow\n";
            return;
        }
        topindex++;
        arr[topindex] = x;
    }

    void pop(){
        if(topindex == -1){
            cout << "Stack underflow\n";
            return;
        }
        topindex--;
    }

    void clear(){
        topindex = -1;
    }

    int top(){
        if(topindex == -1){
            cout<< "Stack is empty\n";
            return -1;
        }
        return arr[topindex];
    }
    bool empty(){
        return topindex == -1;
    }
};

    int main(){
        Stack s;
        s.push(10);
        s.push(20);
        s.push(30);

        while (!s.empty()){

            int temp = s.top();
            cout << temp << " ";
            s.pop();
        }
        cout << endl;

          s.push(15);
        s.push(25);

        s.pop();
        cout << s.top()<< endl;

      

       cout << s.empty() << endl;
        s.clear();
        cout << s.empty() << endl;

        

        return 0;
    }

