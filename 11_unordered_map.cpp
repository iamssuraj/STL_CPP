#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    // unordered_map<int, int> um; // same as map but data isn't sorted

    // Insert elements

    // method-1
    // um.insert(make_pair(1, 5));
    // um.insert(make_pair(2, 6));
    // um.insert(make_pair(3, 7));

    // // method-2
    // um.insert({5, 8});
    // um.insert({6, 9});
    // um.insert({9, 10});

    unordered_map<string, int> um;
    // use of [] operator :
    um["Suraj"] = 44;
    um["Zallen"] = 73;
    um["Bill"] = 71;
    for (auto it : um)
        cout << it.first << "  " << it.second << endl;
    string search = "Zallen";
    if(um.find(search)==um.end())
        cout<<"Not Found"<<endl;
    else
        cout<<"found"<<endl;

    return 0;
}