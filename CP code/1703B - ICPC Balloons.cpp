#include<bits/stdc++.h>
using namespace std;

int main()

{
int t;
cin>>t;
while(t--){

    string s;
    int n;
    cin>>n;
    cin>>s;

    map<char, int> mp;
    int cnt=0;
    for(char i='A'; i<='Z'; i++)
    {
        mp[i] =0;

    }


      for(int i=0; i<s.size(); i++)
    {

        if(mp[s[i]]==0)
        {
            cnt= cnt+2;
            mp[s[i]] ++;
        }else {
            mp[s[i]] ++;
        cnt++;

        }



    }

    cout<<cnt<<endl;
}



}
