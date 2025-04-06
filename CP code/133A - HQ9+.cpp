#include<bits/stdc++.h>

using namespace std;

int main()
{


  string s;
  cin>>s;
  vector <char > ch(s.begin(), s.end());
  int flag=0;

 for(int i=0; i<ch.size(); i++){

      if(ch[i] == 'H' || ch[i] == 'Q' ||ch[i] == '9'  )
      {

          flag=1;
      }
 }



 if(flag==1)
 {
     cout<<"YES" <<endl;
 }else
 {
      cout<<"NO" <<endl;

 }

}
