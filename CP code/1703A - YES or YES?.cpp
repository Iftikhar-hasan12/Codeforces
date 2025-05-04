#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        char s1[100];

        for(int i=0; i<3; i++)
        {
            s1[i] = tolower(s[i]);
        }
        s1[3]='\0';


        if(strcmp(s1,"yes")==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }

}
