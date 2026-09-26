#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

stack<int> st{1,5,3,4,7,5,8,9,3,4,3,3,3,4,5};

int main(){
    cout << st.top();
    return 0;
}