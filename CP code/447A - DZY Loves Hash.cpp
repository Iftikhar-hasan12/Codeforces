#include<bits/stdc++.h>
using namespace std;
int main()
{

    int p,n;
    cin>>p>>n;
    int ar[p+1];



    for(int i=0; i<=p; i++)
    {
        ar[i]=-1;
    }




    for(int i=0; i<n; i++)
    {

        int val;
        cin>>val;
        if(ar[ (val % p) ] == -1)
        {

            ar[(val % p )] =val;
        }
        else
        {

            cout<<i+1<<endl;
           return 0;

        }

    }



    cout<<-1<<endl;



}
