#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int ar[n+1];
    for(int i=0; i<n+1; i++)
    {
        ar[i]=-1;
    }

    int stop = n;
    for(int i=0; i<n+1; i++)
    {
        int val;
        cin>>val;

        if(i!=0)
        {
            ar[val]++;

        }
        else
        {
            ar[i]=val;
        }

        if(i ==ar[0])
        {
            break;
        }
    }





    for(int i=0; i<n+1; i++)
    {
        int val;
        cin>>val;

        if(i!=0)
        {
            ar[val]++;

        }
        else
        {
            ar[i]=val;
        }

        if(i ==ar[0])
        {
            break;
        }
    }

    bool flag= true;



    for(int x: ar)
    {
        if(x==-1)
        {
            flag=false;
            break;

        }
    }


    if(flag)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }


}
