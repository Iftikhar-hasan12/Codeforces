#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;

        int n;
        cin>>n;
        cin>>s;
         string name = "Timru";
         sort(s.begin(), s.end());


     // cout<<s<<endl;
        if(s==name)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;

        }
    }
}
