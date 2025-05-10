#include<bits/stdc++.h>
using namespace std;
int main()
{

 int n;
 cin>>n;
 int k=n;
 n--;
 int sum =0;
 while(n--)
 {
     int val;
     cin>>val;
     sum+=val;
 }
 int res=0;
for(int i=1; i<=k; i++)
{
    res+=i;
}

cout<<res - sum<<endl;


}
