#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int sum=0, a, b;
    int maxi =0;
    while(n--)
    {

        cin>>a>>b;

        sum+= (-a+b);
        if(sum>maxi)
        {
            maxi=sum;
        }
    }
    cout<<maxi<<endl;


}
