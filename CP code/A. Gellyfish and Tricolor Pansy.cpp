#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,bf,c,df;
        cin>>a>>bf>>c>>df;
 
        int lowest = min({a, bf, c, df});
 
 
        if(lowest== bf || lowest == df  )
        {
            cout<<"Gellyfish"<<endl;
        }
        else
        {
            cout<<"Flower"<<endl;
 
        }
 
 
    }
 
}
