#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    vector<int>ar;
    int total=0;

    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        ar.push_back(val);
        total+=val;
    }

    sort(ar.begin(), ar.end());
    reverse(ar.begin(), ar.end());

    int sum=0;
    for(int i=0; i<n; i++ )
    {
        sum+=ar[i];
        total=total-ar[i];

        if(sum>total)
        {
            cout<<i+1<<endl;
            break;
        }


    }



}
