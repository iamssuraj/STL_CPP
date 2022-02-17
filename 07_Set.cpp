// Only unique elements, no modifications, return sorted order of elements
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    set<int> s;
    s.insert(44);
    s.insert(44);
    s.insert(44);
    s.insert(44);
    s.insert(44);
    s.insert(44);
    s.insert(44);
    s.insert(1);
    s.insert(10);
    s.insert(98);
    for (auto i : s)
        cout << i << endl; // Sorted Order, without repetation
    set<int>:: iterator i = s.begin();
    s.erase(i);   
    cout << "After erasing : \n";
    for (auto i : s)
        cout << i << endl;
    return 0;
}