#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a value:";
    cin >> n;

    for (int i=1; i<=n; i++){
        for (int j=i; j<n; j++){
            cout << "  ";
        }
        for (int j=2*(n-i); j<2*n-1; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}