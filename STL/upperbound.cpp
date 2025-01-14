#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 3, 3, 5, 7, 9};
    for(auto it:v)
        cout<<it<<" ";
cout<<endl;
    // Finding the upper bound for 3
    auto it = upper_bound(v.begin(), v.end(), 3);

    if (it != v.end()) {
        cout << "The upper bound of 3 is at index: " << it - v.begin() << endl;
        cout << "Value at upper bound: " << *it << endl;
    } else {
        cout << "3 is greater than all elements in the vector." << endl;
    }

    // Finding the upper bound for 4 (which doesn't exist in the vector)
    it = upper_bound(v.begin(), v.end(), 4);
    cout << "The upper bound of 4 is at index: " << it - v.begin() << endl;
    cout << "Value at upper bound: " << *it << endl;

    return 0;
}
