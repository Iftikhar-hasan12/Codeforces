#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int ar[8];

    for(int i=1; i<=7; i++)
    {

        cin>>ar[i];


    }


    for(int i=1; i<=7; i++)
    {

        n=n-ar[i];
       
        if(n<=0 )
        {
            cout<<i<<endl;
            break;
        }
        else if(i==7)
        {

            i =0;
        }


    }



}
