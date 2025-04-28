#include<bits/stdc++.h>
using namespace std;
int main()

{

   int n;
   cin>>n;
   string s;
   cin>>s;
 map<char, int> freq;


    for (char &c : s)
    {
        c=tolower(c);
    }




    for (char c : s)
    {
        freq[c]++;
    }


    for(char cc ='a'; cc <='z'; cc++)
    {

        if( freq[cc]  == 0 )
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }




     cout<<"YES"<<endl;

}
