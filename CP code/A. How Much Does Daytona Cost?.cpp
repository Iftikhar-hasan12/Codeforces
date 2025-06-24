#include<bits/stdc++.h>
using namespace std;
void solve();
int main()
{
 
 
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
 
 
 
 
 
 
 
 
 
 
}
void solve()
{
 
 
 
int n, k;
cin>>n>>k;
int flag=0;
for(int i=0; i<n; i++)
{
    int val;
    cin>>val;
    if(val==k)flag=1;
}
 
if(flag==1){cout<<"YES"<<endl;}else
    {
        cout<<"NO"<<endl;
    }
 
 
}
