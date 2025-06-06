#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        vector<int>ar(n);

        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            if(val%2==0)
            {
                ar[i] = 0;

            }
            else
            {
                ar[i] = 1;

            }
        }



        int sum=0;
        int zero = 0;

        for(int i=0; i<n; i++)
        {
            if(ar[i]==1)
            {
                sum+=1;

            }
            else
            {

                zero =1;
            }

        }

        if( (sum%2==0 && zero !=0 ) || (sum%2==0 && zero==0))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;

        }

    }



}
