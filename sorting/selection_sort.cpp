#include<iostream>
#include<vector>
using namespace std;

void swap(int &a, int &b){
    int temp = a ;
    a = b; 
    b = temp;
}

void selection_sort(vector<int> &arr){
    int n = arr.size();
    for(int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            if(arr[j] < arr[i]){
                swap(arr[j], arr[i]);
            }
        }
    }
}

int main(){
    int n;
    int m;
    vector<int> arr;
    cout <<"Enter the value of n:";
    cin >> n;
    cout<< "\n Enter the array elements:";
    for (int i=0; i<n; i++){
        cin>> m;
        arr.push_back(m);
    }

    selection_sort(arr);

    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}