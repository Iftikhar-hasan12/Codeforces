
#include<bits/stdc++.h>
using namespace std;

int main()
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
    int cnt=1, maxi=1;

    for(int i=0; i<n-1; i++)
    {

        if(ar[i] <= ar[i+1] )
        {
            cnt++;
        }else
        {
            cnt=1;
        }

        if(maxi<cnt)
        {
            maxi =cnt;
        }



    }


    cout<<maxi<<endl;
}
