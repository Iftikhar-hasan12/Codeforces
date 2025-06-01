#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int>ar(n);
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];

    }
    int temp =0;
    for(int i=0; i<n; i++)
    {

        if(ar[i]-temp < 16)
        {
            temp = ar[i];


        }
        else
        {

            temp = temp+15;
            break;
        }


    }

    if(temp==ar[n-1])
    {
        if(temp+15 <=90 )
        {
            cout<<temp+15<<endl;

        }
        else
        {

            cout<<90<<endl;
        }

    }
    else
    {

        cout<<temp<<endl;

    }


}

