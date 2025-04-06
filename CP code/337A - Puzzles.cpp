#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  int n,m;
    cin>>n>>m;
    vector<long long int > ar;
  
  for(int i =0; i<m; i++)
  {

      int val;
      cin>>val;
      ar.push_back(val);

  }

  sort(ar.begin(), ar.end());
  int mini =(ar[n-1]-ar[0]);

  for(int i =0; i<m; i++)
  {
      if(mini > (ar[i+(n-1)]-ar[i]) ){

        mini =(ar[i+(n-1)]-ar[i]);

      }
      if(i+(n-1) == m-1)
      {
          break;
      }

  }

  cout<<mini <<endl;

}
