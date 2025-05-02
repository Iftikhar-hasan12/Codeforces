#include<bits/stdc++.h>
using namespace std;
int main()

{


int n;
cin>>n;
while(n--){
    vector<string>s;
    int t=3;

    while(t--)
    {
        string val;
        cin>> val;
        s.push_back(val);
    }


    for(string x : s)
    {
        cout<<x[0];
    }

    cout<<endl;
}


}
