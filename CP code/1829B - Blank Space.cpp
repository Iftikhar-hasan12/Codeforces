#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {


        int n;
        int cnt=0, maxi=0;
        cin>>n;
        vector<int>ar;
        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            ar.push_back(val);
        }

        for(int x : ar)
        {
            if(x==0)
            {
                cnt++;
            }
            else
            {
                cnt=0;
            }

            if(cnt>maxi)
            {
                maxi=cnt;
            }
        }

        cout<<maxi<<endl;
    }

}
