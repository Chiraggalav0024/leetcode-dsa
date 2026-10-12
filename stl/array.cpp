#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

array<int,10> arr;
array<int,20> a = {123,34,54,3,453,53,23234,4,23,4,33,34};

int main(){
    for(int x : a){
        cout << x << " ";
    }
    cout << endl;

    sort(a.begin(), a.end());
    a[0] = 1;
    //a.push_back(34434);                         //error

    for(int x : a){
        cout << x << " ";
    }
    cout << endl;

    sort(a.begin(), a.end());

    auto x = lower_bound(a.begin(), a.end(), 0);
    auto y = upper_bound(a.begin(), a.end(), 0);

    cout << "total number of 0:" << " " << y-x << endl;

    for (auto it = arr.begin(); it < arr.end(); it++){
        cout << (*it += 1) << " ";
    }
    cout << endl;

    for (auto c : arr){
        cout << c << " ";
    }
    cout << endl;

}

