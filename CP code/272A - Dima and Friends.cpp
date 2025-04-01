#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int sum=0;
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        sum+=val;

    }

    n=n+1;
    int k=0;
    for(int i=1; i<=5; i++)
    {
        int tem = (n*i)+1;
        if( tem> sum && (sum+5) >= tem)
        {


            k++;
        }

    }

    cout<<5-k<<endl;




}
