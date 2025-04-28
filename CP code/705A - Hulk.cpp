#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n;
    cin>>n;
    string h = "I hate";
    string l = "I love";

    for(int i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            if(i==n)
            {
                cout<<l;
            }
            else
            {

                cout<<l<<" that ";
            }
        }
        else
        {
             if(i==n)
            {
                cout<<h;
            }
            else
            {

                cout<<h<<" that ";
            }

        }

    }

    cout<<" it"<<endl;

}
