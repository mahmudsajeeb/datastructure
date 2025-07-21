#include <bits/stdc++.h>

using namespace std;
 
int main()
{
    int a[6]={1,2,3,4,5,6};
     vector<int> v(a,a+6);
    
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     }
     cout<<endl;
     cout<<v.size()<<endl;
    return 0;
}
