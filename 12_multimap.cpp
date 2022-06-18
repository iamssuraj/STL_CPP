#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    multimap<int, int> m; // sorted map with duplicate keys
    m.insert(pair<int, int> (20, 12));
    m.insert(pair<int, int> (20, 13));
    m.insert(pair<int, int> (22, 70));
    m.insert(pair<int, int> (13, 80));
    m.insert(pair<int, int> (54, 20));
    m.insert(pair<int, int> (75, 0));
    m.insert(pair<int, int> (86, 10));
    m.insert(pair<int, int> (6, 10));
    map<int,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}