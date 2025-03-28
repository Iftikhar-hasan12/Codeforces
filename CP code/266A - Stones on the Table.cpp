#include<bits/stdc++.h>
using namespace std;





int main()
{

  int n;
  cin>>n;
  string s;
  cin>>s;
  int k=0;
  vector<char> c(s.begin(), s.end());

  for(int i=0; i<c.size()-1; i++){

    if(c[i] == c[i+1]){

        k++;
    }

  }

  cout<<k<<endl;


}








