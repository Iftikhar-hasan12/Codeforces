
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    vector<int> ar;


    for(int i=0; i<12; i++)
    {
        int val;
        cin>>val;


        ar.push_back(val);


    }

    sort(ar.begin(), ar.end());

    reverse(ar.begin(), ar.end());
    if(k==0)
    {

        cout<<0<<endl;
        return 0;

    }

    int sum=0;
    for(int i=0; i<ar.size(); i++)
    {


        sum+=ar[i];
        if(sum>=k)
        {

            cout<<i+1<<endl;
            return 0;
        }



    }


cout<<-1<<endl;



}
