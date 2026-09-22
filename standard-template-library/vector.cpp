#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector <int> v1;
vector <int> v2{1,2,3,4,5};
vector <int> v3 = {6,7,8,8,8,8,7,10,9};
vector <int> v4(10,100);

int main() {

    cout << lower_bound(v3.begin(), v3.end(), 7)<< endl;
    cout << upper_bound(v3.begin(), v3.end() ,7)<< endl;
   reverse(v2.begin(), v2.end());
    for (int x : v2){
        cout << x << " ";
    }
    cout << endl;

    sort(v3.begin(), v3.end());
    for (int x : v3){
        cout << x << " ";
    }

    // for (int x : v1) {
    //     cout << x << " ";
    // }
    // cout << endl;

    // for (int x : v2) {
    //     cout << x << " ";
    // }
    // cout << endl;

    // for (int x : v3) {
    //     cout << x << " ";
    // }
    // cout << endl;

    // for (int x : v4) {
    //     cout << x << " ";
    // }
    // cout << endl;
    return 0;
}