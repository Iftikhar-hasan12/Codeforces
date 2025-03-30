
#include<bits/stdc++.h>

using namespace std;

int main()
{


    string s1,s2;
    int sum1=0, sum2=0;
    cin>>s1>>s2;
    vector <char > ch1(s1.begin(), s1.end());
    vector <char > ch2(s2.begin(), s2.end());

    for(int i=0; i<ch1.size(); i++)
    {

        ch1[i] = toupper(ch1[i]);
        ch2[i] = toupper(ch2[i]);


    }


    int flag=0;
    for(int i=0; i<ch1.size(); i++)

    {
        if(ch1[i] > ch2[i])
        {

            flag =1;
            break;
        }
        else if( ch1[i] < ch2[i])
        {

            flag=2;
            break;
        }




    }




    if(flag==1)
    {
        cout<<1<<endl;
    }
    else if(flag==2)
    {
        cout<<-1<<endl;

    }
    else
    {
        cout<<0<<endl;

    }






}
