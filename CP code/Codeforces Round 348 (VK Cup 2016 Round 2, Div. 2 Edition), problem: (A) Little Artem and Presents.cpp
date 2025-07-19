#include<bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    solve();


}



void solve()
{

    int n;
    cin>>n;
    int val=n;
    int cnt=1;
    int k =0;

    for(int i=1;i<=n; i++)
    {

         if(cnt==1 && val>=1)
         {
             val--;
             cnt=0;
             k++;

         }else if(val>1)
         {
             val-=2;
             cnt=1;
            k++;

         }

    }
    cout<<k<<endl;

}
