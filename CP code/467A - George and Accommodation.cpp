#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n;
    cin>>n;
    int p,q;
    int k=0;
   while(n--)
   {
       cin>>p>>q;
       if((p+2)<=q)
       {
           k++;
       }

   }

   cout<<k<<endl;

}
