#include<bits/stdc++.h>
using namespace std;
int main()

{

    int n;
    cin>>n;
    while(n--)
    {
        long long int a,b;
        cin>>a>>b;


        int rem = a % b;
        if(rem==0)
        {
            cout<<0<<endl;


        }else {
        cout<< b- rem<<endl;

        }


    }



}
