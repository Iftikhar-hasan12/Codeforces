#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    string s;
    cin >>s;
    vector<char> ch (s.begin(), s.end() );
 
 
    for(int i = 0; i<ch.size() ; i++)
    {
        if ( ch[i] =='-' && ch[i+1] == '-')
 
        {
            cout<<2;
            i++;
        }
        else if ( ch[i] =='-' && ch[i+1] == '.')
        {
            cout<<1;
            i++;
        }
        else
        {
            cout<<0;
        }
 
    }
    
    cout<<endl;
 
 
 
}
