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
        int a = s[0]-'0';
        char op = s[1];
        int b = s[2]-'0';

        switch(op)
        {
        case '<':
            if(a<b)
            {
                cout<<s<<endl;

            }
            else if(a==b)
            {


                cout<<a<<"="<<b<<endl;




            }
            else
            {


                cout<<a<<">"<<b<<endl;


            }




            break;
        case '>':
            if(a>b)
            {
                cout<<s<<endl;

            }
            else if(a==b)
            {


                cout<<a<<"="<<b<<endl;




            }
            else
            {


                cout<<a<<"<"<<b<<endl;


            }



            break;
        case '=':
            if(a==b)
            {
                cout<<s<<endl;

            }
            else if(a<b)
            {


                cout<<a<<"<"<<b<<endl;




            }
            else
            {


                cout<<a<<">"<<b<<endl;


            }
            break;



        }

    }



}
