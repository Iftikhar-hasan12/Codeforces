#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    string str = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string str2 = "wertyuiopasdfghjkl;zxcvbnm,./";
 
    string r = "wertyuiopasdfghjkl;zxcvbnm,./";
    string l = "qwertyuiopasdfghjkl;zxcvbnm,.";
 
    char dir;
    cin>>dir;
    string in;
    cin>>in;
 
 
 
 
    map<char, char> R_map;
    map<char, char> L_map;
 
    for(int i=0; i<str.size(); i++)
    {
 
        R_map[ r[i] ] =  str[i];
    }
 
    for(int i=0; i<str2.size(); i++)
    {
 
        L_map[ l[i] ] =  str2[i];
    }
 
 
 
    if(dir=='R')
    {
 
        for(int i=0; i<in.size(); i++)
        {
 
            cout<<R_map[ in[i] ];
        }
 
 
 
    }
    else
    {
 
 
        for(int i=0; i<in.size(); i++)
        {
 
            cout<<L_map[ in[i] ];
        }
 
 
 
 
    }
 
 
cout<<endl;
 
 
}
