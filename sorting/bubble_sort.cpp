#include<iostream>
#include<vector>
using namespace std;

int n;
vector<int> arr;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void bubble_sort(vector<int> &arr){
    for (int i=0; i<(n-1); i++){
        for (int j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void print(vector<int> arr){
    for (int x: arr){
        cout << x << " ";
    }
    cout << endl;
}
int main(){
    cout << "Enter the value of n:";
    cin >> n;
    cout << "\n Enter the array elements:";

    for (int i=0; i<n; i++){
        int m;
        cin>> m;
        arr.push_back(m);
    }

    bubble_sort(arr);
    
    print(arr);
    return 0;
}
