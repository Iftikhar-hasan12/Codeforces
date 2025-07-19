#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string s2=s;
    int n= s.length();
    n--;

    int num=atoi(s.c_str());

    if(num<0)
    {
        string a = s.erase(n,1);
        string b = s2.erase(n-1,1);
//         cout<<a<<endl;
//         cout<<b<<endl;

        int num_a = atoi(a.c_str());
        int num_b = atoi(b.c_str());
//        cout<<num_a<<endl;
//        cout<<num_b<<endl;

        if(num_a>num_b)
        {
            cout<<num_a<<endl;
        }else
        {
            cout<<num_b<<endl;

        }


    }else
    {

        cout<<num<<endl;
    }
}
