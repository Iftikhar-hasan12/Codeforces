#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int k =n-1;
    int flag = (n%2==0) ? 0 : 1;


    for(int i=0; i<n; i++)
    {

        if( flag==1 && k%2!=0)
        {
            cout<<s[k];

        }
        if( flag==0 && k%2==0)
        {
            cout<<s[k];

        }



        k--;

    }




    for(int i=0; i<n; i++)
    {

        if( flag==1 && i%2==0)
        {
            cout<<s[i];

        }

         if( flag==0 && i%2!=0)
        {
            cout<<s[i];

        }


    }


cout<<endl;




}
