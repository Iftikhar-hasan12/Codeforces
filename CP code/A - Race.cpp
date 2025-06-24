#include<bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    int t;
    cin>>t;
 
    while(t--)solve();
 
 
}
void solve()
{
 
    int a, x, y;
    cin>>a>>x>>y;
    // case 1, x is point
    int bob = abs(x-y);
    int alice = abs(a-x);
    int alice2 = abs(a-y);
     alice = alice + alice2;
 
 
 
    //case 2 y is point
// int bob = abs(x-y);
//    int alice = abs(a-x);
//    int alice2 = abs(a-y);
//     alice = alice + alice2;
 
 
 
    if(bob<alice)
    {
 
        cout<<"YES"<<endl;
    }else {
 
   cout<<"NO"<<endl;
 
 
    }
 
}
