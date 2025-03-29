#include<bits/stdc++.h>
using namespace std;

int main()
{

  string s;
  cin>>s;
  vector<char> ch (s.begin(), s.end());
  vector<int> ar;
  for(int i=0; i<ch.size(); i++)
  {
      if(ch[i]!='+')
      {
          int val = ch[i]-'0';
          ar.push_back(val);
      }

  }




  sort(ar.begin(), ar.end());


  for(int i=0; i<ar.size(); i++)
  {
     if(i == ar.size()-1 ){

      cout<< ar[i];
     }else {

     cout<< ar[i]<<"+";
     }

  }

cout<<endl;

}
