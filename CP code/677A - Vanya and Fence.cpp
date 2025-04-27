#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n,k;
    cin>>n>>k;

    vector<int>ar;

    for(int i=0; i<n; i++)
    {

        int val ;
        cin>>val;
        ar.push_back(val);
    }

   int w=0;
     for(int i=0; i<n; i++)
    {
        if(ar[i] > k)
        {
            w+=2;

        }else
        {

            w++;
        }

    }
    cout<<w<<endl;



}
