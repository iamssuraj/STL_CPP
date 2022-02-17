// lists
#include <bits/stdc++.h>
#define int long long int
using namespace std;

signed main()
{
    list<int> d = {1, 2, 3, 4, 5};
    int k = 5;
    d.push_back(10);
    d.push_front(-10);
    for (int i = 0; i < d.size(); i++)
        cout << i << " ";
    cout << endl;
    cout << "Front : " << d.front() << endl;
    cout << "Back : " << d.back() << endl;
    cout << d.empty() << endl;
    d.remove(5);
    for (int i = 0; i < d.size(); i++)
        cout << i << " ";
    cout << endl;

    return 0;
}