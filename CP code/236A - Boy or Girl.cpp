
#include<bits/stdc++.h>

using namespace std;

int main()
{


    string s;
    cin>>s;

    vector<char> ch (s.begin(), s.end());

    int k=0;
   sort(ch.begin(), ch.end());

   for(int i=0; i<ch.size(); i++)
   {

       if(ch[i]==ch[i+1])
       {

           continue;
       }
       k++;
   }


    if(k%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }else {

    cout<<"IGNORE HIM!"<<endl;
    }





}
