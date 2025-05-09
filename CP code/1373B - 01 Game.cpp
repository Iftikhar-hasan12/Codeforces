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
        int one=0, zero =0,mini;
        for(int i=0; i<s.size(); i++)
        {

            if(s[i] == '1')
            {
                one++;
            }
            else
            {

                zero ++;
            }

        }


        if(one > zero )
        {
            mini = zero;

        }
        else
        {

            mini = one ;
        }

        cout<< ( (mini%2==0) ? "NET" :"DA")<<endl;

    }
}
