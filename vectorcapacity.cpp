#include <bits/stdc++.h>

using namespace std;
 
int main()
{
    //  vector<int> v;
    //  cout<<v.capacity()<<endl;
    //  v.push_back(10);
    //  cout<<v.capacity()<<endl;

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.clear();
    cout<<v.size()<<endl;
    cout<<v[4]<<endl;
    return 0;
}
