#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    int n;
    cin>>n;
    vector<string> st;
    for(int i=0; i<n; i++)
    {
 
        string val;
        cin>>val;
        st.push_back(val);
    }
 
    map< string, int> freq;
 
    for (const string& name :st)
    {
        freq[name]++;
    }
int mx=0;
string res;
    for (const auto& pair : freq)
    {
 
    if( mx < pair.second)
    {
        mx = pair.second;
        res = pair.first;
 
 
    }
       // cout << pair.first << ": " << pair.second << endl;
    }
 
cout<<res <<endl;
 
 
}
