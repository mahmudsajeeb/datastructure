#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i*i<=n; i++){
        if(i%2==0){
            cout<<" ";
            if(n/i!=i){
                cout<<i<<endl;
            }
        }
    }

 

 
   
    return 0;
}