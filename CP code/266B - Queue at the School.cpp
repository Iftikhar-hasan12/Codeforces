
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int n;
    int sz;
 
    string s;
    cin>> sz;
    cin>>n;
    cin>> s;
 
    vector<char> ch(s.begin(), s.end());
 
    while(n--)
    {
 
        for(int i=0; i<ch.size(); i++)
        {
 
            if( ch[i]=='B' && ch[i+1]== 'G')
            {
 
                swap ( ch[i], ch[i+1]);
                i+=1;
            }
 
 
        }
    }
 
 
    for(char c : ch)
    {
        cout<<c;
    }
    cout<<endl;
 
 
 
 
}
