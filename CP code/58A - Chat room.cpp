#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
char     ch[5]= {'h','e','l','l','o'};
int cnt=0;
     int k=0;
    for(int i=0; i<5; i++)
    {

    int j ;
      j =k;
       for( ; j<s.size(); j++)
       {
             if(ch[i] ==s[j])
             {


               cnt++;
               k=j+1;
               break;

             }
       }

    }

   // cout<<cnt<<endl;
    if(cnt==5)
    {
    cout<<"YES"<<endl;
    }else
    {

    cout<<"NO"<<endl;

    }
}
