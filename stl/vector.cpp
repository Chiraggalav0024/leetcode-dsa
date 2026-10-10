//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> v;
vector<int> v1 = {1,564,4,23,324,54,34};
vector<int> v2{23,4234,4,23,423,42,2342,32};

int main(){

    v.push_back(10);
    v.push_back(20);
    v.emplace_back(30);
    
    
    for (int x: v){
        cout<< x*10<< " ";
    }
    cout << endl;
    cout << v[1]<< endl;

    for (int &x: v){
        cout << (x*= 10) << " ";
    }
    cout << endl;
    cout << v[1]<< endl;

    v.insert(v.end(),v1.begin(), v1.end());
    v.insert(v.end(), v2.begin(), v2.end());

    for (auto it = v.begin(); it<v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    cout << v.size()<< endl;

    sort(v.begin(), v.end());

    for (int x : v){
        cout << x << " ";
    }
    cout << endl;

   auto a = lower_bound(v.begin(), v.end(), 23);
    auto b =upper_bound(v.begin(), v.end(), 23);

    cout << "total cound of 23 is: " << b-a << endl;

    cout << "lower bound:" << *a <<endl;
    cout << "upper bound:" << *b << endl;

    return 0;
}

