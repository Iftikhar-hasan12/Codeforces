#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n;
    string s;
    cin>>n;
    char prev ='a';
    int k=1;
    while(n--)
    {

        cin>>s;
        if(s[0] == prev )
        {
            k++;
        }
        prev = s[1];

    }

    cout<<k<<endl;

}
