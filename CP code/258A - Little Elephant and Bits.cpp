#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int flag=1;
    vector<char>ch;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='0'  && flag==1)
        {
            flag=0;
            continue;
        }
        ch.push_back(s[i]);
    }

    for(int i=0; i<ch.size(); i++)
    {
        if(flag==1)
        {
            flag=0;
            continue ;

        }

        cout<<ch[i];
    }


    cout<<endl;
}
