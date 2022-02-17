#include <bits/stdc++.h>
using namespace std;

signed main()
{
    stack<string> s;
    s.push("Elon");
    s.push("Sundar");
    s.push("Warren");
    s.push("Suraj");
    cout <<"Size is : "<< s.size() << endl;
    cout <<"Empty : "<< s.empty() << endl;
    cout <<"Top element is : "<< s.top() << endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout <<"Size is : "<< s.size() << endl;
    cout <<"Empty : "<< s.empty() << endl;
    cout <<"Top element is : "<< s.top() << endl;
    return 0;
}