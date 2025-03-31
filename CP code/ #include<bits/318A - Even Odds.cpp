
#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  int k;
  cin>>n>>k;
  vector<int>ar;

  for(int i=1; i<=n; i++)
  {
      if(i%2!=0){

        ar.push_back(i);
      }

  }

   for(int i=1; i<=n; i++)
  {
      if(i%2==0){

        ar.push_back(i);
      }

  }


  cout<<ar[k-1]<<endl;


}


