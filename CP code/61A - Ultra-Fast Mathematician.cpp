#include<bits/stdc++.h>
using namespace std;


int main()
{

string n, m;
    cin>>n>>m;
    int ar1[101];
    int ar2[101];
    int ar3[101];
    int len = n.length();

    for(int k = 0; k<len; k++)
    {
        ar1[k] = n[k] - '0';
        ar2[k] = m[k] - '0';
    }
    for(int i=0; i<len; i++)
    {
        if( ar1[i] == ar2[i])
        {
            ar3[i]=0;
        }
        else
        {
            ar3[i]=1;
        }


    }

    for(int i=0; i<len; i++)
    {
        cout<<ar3[i];
    }
    cout<<endl;

}





