//  You are given an integer array arr. Sort the integers in the array in ascending order by the number of 1's in their binary
// representation and in case of two or more integers have the same number of 1's you have to sort them in ascending order.
// Return the array after sorting it.
#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
const int N = 1e5 + 2, MOD = 1e9 + 7;
class Solution
{
public:
    static bool sortByVal(pair<int, int> &a, pair<int, int> &b)
    {
        if (a.second != b.second)
            return a.second < b.second;
        return a.first < b.first;
    }
    vector<int> sortByBits(vector<int> &arr)
    {
        multimap<int, int> m;
        for (int i = 0; i < arr.size(); i++)
        {
            m.insert({arr[i], __builtin_popcount(arr[i])});
        }
        vector<pair<int, int>> v;
        for (auto it : m)
        {
            v.push_back(it);
        }
        sort(v.begin(), v.end(), sortByVal);
        vector<int> ans;
        int i = 0;
        for (auto it : v)
        {
            ans.push_back(it.first);
        }
        return ans;
    }
};

signed main()
{
    int n;
    cout << "Enter Size : ";
    cin >> n;
    vi a(n);
    cout << "Enter elements : ";
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    Solution s;
    vi b = s.sortByBits(a);
    rep(i, 0, n)
    {
        cout << b[i] << " ";
    }
    //Enter Size : 9
    // Enter elements : 0 1 2 3 4 5 6 7 8  
    // 0 1 2 4 8 3 5 6 7 
    return 0;
}