#include<bits/stdc++.h>
using namespace std;
int main()
{
 
  int  a, b, c, d;
    cin>>a>>b>>c>>d;
    int ar[5]={0,a,b,c,d};
 
 
 
    string in;
    cin>>in;
    int sum=0;
   for( int i=0; i<in.size(); i++)
   {
       int ind = in[i]-'0';
 
       sum+= ar[ind];
 
 
   }
  cout<<sum<<endl;
 
}
