#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.emplace_back(4);
    v.insert(v.begin(),4,3);
    vector<int>::reverse_iterator it = v.rend();
    it--;//everything in reverser order always!!!! ?????
    cout<<*it;

    return 0;
}

