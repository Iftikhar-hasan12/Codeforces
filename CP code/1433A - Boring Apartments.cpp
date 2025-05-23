#include<bits/stdc++.h>

using namespace std;

int main()

{
    int t;
    cin>>t;
    while(t--)
    {

        int a;

        cin>>a;

        int n = a%10;

        n--;

        int sz = log10(a)+1;
//    cout<<"N : "<<n;
//    cout<<"\nsize : "<<sz;

        n =n*10;

        if(sz==4)

        {

            n=n+10;

        }
        else if(sz==3)

        {

            n+=6;

        }
        else if (sz==2)

        {

            n+=3;

        }
        else if(sz==1)

        {

            n+=1;

        }


        cout<<n<<endl;
    }


}
