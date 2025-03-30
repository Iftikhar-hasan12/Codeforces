
#include<bits/stdc++.h>

using namespace std;

int main()
{


    string s1,s2,s3;
    cin>>s1>>s2>>s3;

    string con = s1+s2;
    vector<char> ch1(con.begin(), con.end());
    vector<char> ch2(s3.begin(), s3.end());


    sort(ch1.begin(), ch1.end());
    sort(ch2.begin(), ch2.end());
    string st1(ch1.begin(), ch1.end());
    string st2(ch2.begin(), ch2.end());

    if(st1==st2)
    {
        cout<<"YES"<<endl;
    }else {

    cout<<"NO"<<endl;
    }

}
