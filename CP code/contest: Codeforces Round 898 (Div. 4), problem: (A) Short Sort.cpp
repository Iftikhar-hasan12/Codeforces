#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
 string s1,s2,s3,s4;
 cin>>s1;
 s2= s1;
 s3 = s1;
 s4=s1;
 int flag=0;
 if(s1=="abc")
 {
     cout<<"YES"<<endl;
     flag=1;
 }
 swap(s2[0],s2[1]);

 if(s2=="abc")
 {
     cout<<"YES"<<endl;
     flag=1;
 }

 swap(s3[0],s3[2]);
  if(s3=="abc")
 {
     cout<<"YES"<<endl;
     flag=1;
 }
 swap(s4[1],s4[2]);
  if(s4=="abc")
 {
     cout<<"YES"<<endl;
     flag=1;
 }
 if(flag==0)
 {
     cout<<"NO"<<endl;
 }

    }
}
