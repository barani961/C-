#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.emplace_back(4);
    v.insert(v.begin(),4,3);
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    cout<<*it<<" ";
    cout<<endl;
   v.insert(v.begin(),4,3);
   for(auto it:v)
   cout<<it<<" ";

    return 0;
}
