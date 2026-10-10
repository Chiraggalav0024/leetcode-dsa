//#include<bits/stdc++.h
#include<iostream>
#include<stack>
#include<vector>
#include<list>
using namespace std;

stack<int> st;                           //default deque
//stack<int> st(1,3,5,2,1,23,4)          //error          
 
stack<int, vector<int> > st1;           //using vector
stack<int, list<int> > st2;             //internally use linked list to store data

int main(){
    st.push(5);
    st.push(10);
    st.push(15);
    st.push(20);
    cout << st.top()<< endl;

    stack<int> temp = st;
    while (!temp.empty()){
        cout << temp.top()<< " ";
        temp.pop();
    }
    cout << endl;

    cout << st.empty()<<endl;
    
   while (!st.empty()){
    st.pop();
   }

    cout<< st.empty()<<endl;

    st.emplace(10);

    cout << st.size()<<endl;

    cout << st.top()<<endl;


    return 0;
}