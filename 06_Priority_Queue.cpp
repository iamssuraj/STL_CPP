// Priority Queue :  It is a queue where the first element is always the greatest
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    priority_queue<int> p;
    p.push(1);
    p.push(2);
    p.push(4);
    p.push(3);
    int n = p.size(); // Don't put p.size() in the loop as p.size varies after poping
    for (int i = 0; i < n; i++)
    {
        cout << p.top() << endl;
        p.pop();
    }
    return 0;
}