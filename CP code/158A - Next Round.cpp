#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a, b;
    cin>>a>>b;
    int n=a;
    int cnt=0;
    vector<int>ar;

    while(a--)
    {
        int val;
        cin>>val;
        ar.push_back(val);
    }




    int k = ar[b-1];

    for(int i=0; i<n; i++)
    {
        if(ar[i] >=k && ar[i]>0)
        {
            cnt++;
        }

    }


    cout<<cnt<<endl;

}
