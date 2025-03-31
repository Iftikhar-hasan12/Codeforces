
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    long long int k;
    cin>>n>>k;
    long long int res;
    long long int f;
    long long int tem =ceil( n/2.0 );
    if( tem >=k)
    {

        // odd

        res = 2*(k-1) + 1;
    }
    else
    {
        //even

        f = k-tem;
        res = 2*f;

    }

    cout<<res<<endl;


}


