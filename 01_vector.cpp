//vectors
#include <bits/stdc++.h>
using namespace std;
signed main()
{
    vector<int> v; // declaration
    // syntax :
    //  vector <datatype> vectorname;
    v.push_back(44); // pushback -- handles with size of array
    v.push_back(53);
    v.push_back(50);
    v.push_back(39);
    v.push_back(38);
    v.push_back(36);
    // printing vector
    //  for(int i=0;i<v.size();i++)
    //      cout<<v[i] <<" ";

    // v[0] = 70;//Values in vector can be changed
    // dont use [] --> for inserting elements
    // v[i]  -- should be used olny for obtaining an element at an index
    // or updating an element

    // cout<<v[6]<<endl; --> Shows a garbage value at that index
    // cout<<v.at(6)<<endl; // Throws error

    // size()  vs capacity()
    // size increases size one by one
    // capacity double size, example :
    // vector<int> v2;
    // for(int i=0;i<0;i++)
    // {
    //     v2.push_back(i);
    //     // cout<<"v2["<<i<<"] : "<<v2[i]<<endl;
    //     cout<<"size : "<<v2.size()<<endl;
    //     cout<<"capacity : "<<v2.capacity()<<endl;
    // }

    // sorted vector
    // sort(v.begin(),v.end());
    // for(int i=0;i<v.size();i++)
    //     cout<<v[i] <<" ";

    // initializing size and elements of a vector
    // vector<int> v1(5,44);// vector<int> vectorname(size,elements)
    // for(auto i:v1)
    //     cout<<i<<" ";


    //remove element
    // v.pop_back();
    // for (auto i : v)
    //         cout
    //     << i << " ";

    // swap(vector1, vector2); --> swaps two vectors

    return 0;
}