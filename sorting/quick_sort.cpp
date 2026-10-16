#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr, int low, int high){
    int pivot = arr[high];
    int j = low;
    for(int i = low; i<high; i++){
        if(arr[i] < pivot){
            swap(arr[i], arr[j]);
            j++;
        }
    }
    swap(arr[j], arr[high]);
    return j;
}

void quick_sort(vector<int> &arr, int low, int high){
    if (low<high){
        int pi = partition(arr,low,high);
        quick_sort(arr,low,pi-1);
        quick_sort(arr,pi+1,high);
    }
}

int main(){
    vector<int> v{234,54,3,324,45,545,5435,56,323,4,3,54};
    quick_sort(v,0,v.size()-1);

    for(int x: v){
        cout<< x << " ";
    }
    cout << endl;
    return 0;
}