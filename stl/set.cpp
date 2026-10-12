#include<iostream>
#include<set>
using namespace std;

set<int> s;
set<int> s1{12,34,34,23,4,3,4,5,3434,34,43,454,345};

int main(){
for(int c: s1){
    cout << c << " ";
}
cout << endl;

s.insert(s1.begin(), s1.end());
s.insert(s.begin(), 0);

for (int x : s){
    cout << (x*=10) << " ";
}
cout << endl;

s.emplace(1);
s.erase(3);

for(int temp : s){
    cout << temp << " ";
} cout << endl;

return 0 ;
}