#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int  n;
    cin>>n;
    long long int ar[]= {1,5,10,20,100};
    long long int sum=0, prev =0;
    int i=1, j=4;
    while(true)
    {
        sum +=ar[j];
        if(sum==n)
        {

            cout<<i<<endl;
            return 0;
        }

        else if(sum<n)
        {
            prev = sum ;
            i++;
        }
        else
        {
           sum =prev ;
            j--;
        }

    }

}
