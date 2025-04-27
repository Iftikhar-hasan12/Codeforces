#include<bits/stdc++.h>
using namespace std;
int main()

{
    int k;
    cin>>k;
    string s;
    cin>>s;
    int a=0, d=0;

    for(int i=0; i<k; i++)
    {
        if(s[i]=='A')
        {
            a++;

        }
        else
        {

            d++;
        }

    }


    if(a==d)
    {
        cout<<"Friendship"<<endl;
    }
    else if(a>d)
    {
        cout<<"Anton"<<endl;

    }
    else
    {

        cout<<"Danik"<<endl;
    }




}
