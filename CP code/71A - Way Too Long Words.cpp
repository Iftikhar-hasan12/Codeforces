
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;
    vector<string> st;

    while(n--)
    {
        string val;
        cin>>val;
        st.push_back(val);
    }

    for(int i =0; i<st.size(); i++)
    {

        vector<char> ch(st[i].begin(), st[i].end() );
        if(ch.size() >10)
        {
            cout<<ch[0]<<ch.size()-2<< ch[ch.size()-1]<<endl;
        }
        else
        {
            cout<<st[i]<<endl;

        }
    }

}


