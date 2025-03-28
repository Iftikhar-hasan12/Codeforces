#include<bits/stdc++.h>
using namespace std;


void touppered (vector < char> &c);
void tolowered (vector < char> &c);

int main()
{

    string s;
    cin>>s;
    vector<char> c (s.begin(), s.end());
    int up =0, lw =0;

    for(int i=0; i<c.size(); i++)
    {
        if(c[i] >= 'a' && c[i] <='z')
        {
            lw++;

        }

    }

    up = c.size() - lw;
    if(up > lw)
    {
        touppered(c);
    }
    else if( lw > up)
    {
        tolowered(c);
    }
    else
    {
        tolowered(c);
    }



    for(int i=0; i<c.size(); i++)
    {

        cout<<c[i];
    }


    cout<<endl;

}




void touppered (vector < char> &c)
{

    for (int i=0; i< c.size(); i++)
    {
        c[i] = toupper(c[i]);

    }


}



void tolowered (vector < char>& c)
{

    for (int i=0; i< c.size(); i++)
    {
        c[i] = tolower(c[i]);

    }

}


