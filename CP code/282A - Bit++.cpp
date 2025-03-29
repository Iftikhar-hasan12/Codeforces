#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;

    string val;
    int a =0;
    while(n--)

    {
        cin>>val;

        if(val == "X++")
        {
            a++;

        }
        else if( val == "++X" )
        {
            ++a;
        }
        else if( val == "X--" )
        {
            a--;
        }
        else if( val == "--X" )
        {
            --a;
        }


    }

    cout<<a<<endl;


}
