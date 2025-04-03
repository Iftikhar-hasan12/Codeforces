#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    vector<int > ar;

    for(int i=0; i<n; i++)
    {

        int val;
        cin>>val;
        ar.push_back(val);

    }

    if(n==1 )
    {
           cout<<1<<endl;
           return 0;

    }

    int mini =ar[0];
    int k=0;
    for(int i=0; i<n; i++)
    {

        if(mini > ar[i])
        {
            mini =ar[i];
            k=i;
        }

    }



    for(int i=0; i<n; i++)
    {

        if(mini == ar[i] && i!=k)
        {
            cout<<"Still Rozdil"<<endl;
            return 0;
        }


    }
    cout<<k+1<<endl;




}
