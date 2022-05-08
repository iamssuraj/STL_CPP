#include <bits/stdc++.h>
using namespace std;

signed main()
{
    // map<int, string> m;
    // m[44] = "Suraj";
    // m.insert({70, "Elon"});
    // for (auto i : m)
    //     cout<< i.first << " --- " << i.second << endl;

    int n;
    cin >> n;
    int a[n];
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }

    // Method - 1
    // map<int,int> :: iterator it;
    // for(it=m.begin();it!=m.end();it++)
    // {
    //      cout<<it->first<<" "<<it->second<<endl;
    // }

    
    // Method-2
    //  for(auto it=m.begin();it!=m.end();it++)
    //  {
    //       cout<<it->first<<" "<<it->second<<endl;
    //  }


    //Method-3
    for (auto it : m)
    {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}