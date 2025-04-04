#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n;
    cin>>n;

    int k=0;
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;

        if(val==5)
        {
            k++;
        }

    }
    int zero =0;
    zero= n-k;

    int sum=0;
    int flag=0;

    for(int i=k; i>0; i--)
    {
        sum = 5*i;
        if(sum%9==0)
        {
            flag=1;
            k=i;
            break;
        }

    }

    if(zero==0 )
    {
        cout<<-1<<endl;

        return 0;
    }
    else if(zero!=0 && flag ==0)
    {

        cout<<0<<endl;

        return 0;

    }


    for(int i=1; i<=zero + k; i++)
    {
        if(i<=k)
        {
            cout<<5;
        }
        else
        {
            cout<<0;

        }
    }


    cout<<endl;


}
