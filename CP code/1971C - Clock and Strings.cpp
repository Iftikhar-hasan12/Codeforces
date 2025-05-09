#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b,c,d;
        cin>>a>>b>>c>>d;
        int ar[13]={0};

        if(a>b)
        {
            for(int i=b; i<=a; i++)
            {
                ar[i]++;
            }
        }
        else
        {
            for(int i=a; i<=b; i++)
            {
                ar[i]++;
            }

        }

        //-----------

        if(c>d)
        {
            for(int i=d; i<=c; i++)
            {
                ar[i]++;
            }
        }
        else
        {
            for(int i=c; i<=d; i++)
            {
                ar[i]++;
            }

        }


        if(ar[c]==ar[d])
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;

        }

    }






}
