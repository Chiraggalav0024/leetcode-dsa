#include<iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter a number:";
    cin >>n;

    for(int i=1; i<=n; i++){
        for (int j=i; j<n; j++){
            cout << "  ";
        }
        for(int j=2*(n-i)+1; j<2*n; j++){
            cout << "*" <<" ";
        }
        cout << endl;
    }
    for (int i=1; i<=n-1; i++){
        for(int j=n-i; j<n; j++){
            cout << "  ";
        }
        for (int j=1; j<2*(n-i); j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}