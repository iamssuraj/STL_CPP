#include <bits/stdc++.h>
using namespace std;

signed main()
{
    map<int, string> m;
    m[44] = "Suraj";
    m.insert({70, "Elon"});
    for (auto i : m)
        cout<< i.first << " --- " << i.second << endl;
    return 0;
}