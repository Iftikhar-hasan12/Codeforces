#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>ar;
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            ar.push_back(val);
 
        }
        int val = ar[0];
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            if(val==ar[i])
            {
                cnt++;
            }
        }
 
        if(cnt!=1)
        {
            for(int i=0; i<n; i++)
            {
                if(val!=ar[i])
                {
                    cout<<i+1<<endl;
                    break;
                }
 
            }
        }
        else
        {
 
            cout<<1<<endl;
 
        }
 
    }
 
}
