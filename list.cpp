#include <list>
#include <iostream>
#include <algorithm>
using namespace std;

list <int> l;
list<int> lst = {1,3,4,2,5,6,4,7,5,4};
list <int> lst1(5,10);

void print(list<int> lst){
    for (int x : lst)
    cout << x << " ";
    cout << endl;
}


int main(){
  print(l);
  print(lst);
  print(lst1);

l.push_back(20);
l.push_front(10);
l.push_back(30);

auto it = l.begin();
advance(it,1);
advance(it,1 );

l.insert(it,15);

print(l);

l.pop_back();
l.push_back(40);
l.remove(15);
l.insert(it,15);
print(l);

    return 0;
}