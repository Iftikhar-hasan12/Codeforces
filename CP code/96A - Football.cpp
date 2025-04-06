#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin>>s;
    int k=0;
    int f=0;
    int flag=0;
    for(int i=0; i<s.size(); i++)
    {

        if(s[i]=='0')
        {
            k++;
        }
        else
        {

            k=0;
        }



        if(s[i]=='1')
        {
            f++;
        }
        else
        {

            f=0;
        }



        if(k==7 || f==7)
        {

            flag=1;
            break;
        }


    }

    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;

    }




}
