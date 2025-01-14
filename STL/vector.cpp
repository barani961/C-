#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v;
    v.emplace_back(4);

    vector<int> v1(5, 20);
    for (auto i : v1)
        cout << i << " ";
    cout << endl;

    vector<pair<int, int>> v2;
    v2.emplace_back(3, 4);
    v2.push_back({2, 3});

    for (vector<pair<int, int>>::iterator it = v2.begin(); it != v2.end(); it++)
        cout << "(" << it->first << ", " << it->second << ") ";
    cout << endl;

    cout << "\nInserting 5 at the beginning of v1:" << endl;
    v1.insert(v1.begin(), 5); // Corrected line to insert into v1

    for (auto i : v1)
        cout << i << " ";
    cout << endl;

    auto itr_1 = v1.end();
    itr_1--;
    cout << "Last element of v1: " << *itr_1 << endl;

    vector<int> v3;

    if (!v3.empty()) {
        auto it = v3.begin();
        v3.erase(it); // Erasing the first element if vector is non-empty
    }

    if (!v3.empty()) {
        v3.pop_back(); // Deleting the last element if vector is non-empty
    }

    if (!v3.empty()) {
        cout << "First element of v3: " << v3.front() << endl; // Accessing first element if non-empty
        cout << "Last element of v3: " << v3.back() << endl;   // Accessing last element if non-empty
    }

    v3.clear(); // Clear all elements (safe for empty vector)
    cout << "Is vector v3 empty? " << (v3.empty() ? "Yes" : "No") << endl; // Check if empty
    cout << "Vector v3 size: " << v3.size() << endl; // Display size

    return 0;
}
