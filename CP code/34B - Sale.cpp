
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    vector<int> ar;

    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        if(val<0)
        {

            ar.push_back(val);
        }

    }

    sort(ar.begin(), ar.end());
int sum=0;
    for(int i=0; i<ar.size(); i++)
    {

        if(i<m)
        {
            sum+=ar[i];

        }


    }


    cout<<abs(sum)<<endl;



}
