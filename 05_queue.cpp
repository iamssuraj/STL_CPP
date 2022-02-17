#include <bits/stdc++.h>
using namespace std;

signed main()
{
    queue<string> q;
    q.push("Suraj");
    q.push("Sanganbhatla");
    cout << "First element : " << q.front() << "  ";
    cout << "Last element : " << q.back() << "  ";
    cout << "Size is : " << q.size();
    q.pop();
    cout << endl;
    cout << "First element : " << q.front() << "  ";
    cout << "Last element : " << q.back() << "  ";
    cout << "Size is : " << q.size();
    return 0;
}