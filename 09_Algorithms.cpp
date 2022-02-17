#include <bits/stdc++.h>
using namespace std;

signed main()
{
    vector<int> v;
    v.push_back(19);
    v.push_back(22);
    v.push_back(33);
    v.push_back(44);
    v.push_back(56);
    v.push_back(67);
    v.push_back(78);
    // cout << binary_search(v.begin(), v.end(), 45) << endl;
    reverse(v.begin(), v.end());
    for (auto i : v)
        cout << i << endl;
    //swap
    //max,min
    // rotate functions can be used
    return 0;
}