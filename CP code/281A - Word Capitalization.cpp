#include<bits/stdc++.h>
using namespace std;


void touppered (vector < char> &c);


int main()
{

    string s;
    cin>>s;
    vector<char> c (s.begin(), s.end());
    int up =0, lw =0;

   c[0] = toupper(c[0]);

    for(int i=0; i<c.size(); i++)
    {

        cout<<c[i];
    }


    cout<<endl;

}








