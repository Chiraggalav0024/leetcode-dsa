#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr,int low, int high){
    vector<int> temp;
    int mid = low + (high - low)/2;
    int i = low;
    int j = mid+1;
    while(i<=mid && j<=high){
        if (arr[i] < arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=high){
        temp.push_back(arr[j]);
        j++;
    }
    for (int i=0; i<temp.size(); i++){
        arr[low+i] = temp[i];
    }
}

void merge_sort(vector<int> &arr , int low, int high){
    if (low<high){
        int mid = low + (high-low)/2 ;
    
    merge_sort(arr,low, mid);
    merge_sort(arr,mid+1, high);
    merge(arr, low, high);
    }
}


int main(){
    vector<int> v{234,54,3,324,45,545,5435,56,323,4,3,54};
    merge_sort(v,0,v.size()-1);

    for(int x: v){
        cout<< x << " ";
    }
    cout << endl;
    return 0;
}