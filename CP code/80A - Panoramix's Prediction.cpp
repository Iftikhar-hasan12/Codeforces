#include<bits/stdc++.h>
using namespace std;



int isPrime(int n);

int main()
{

  int n,m;
  cin>>n;
  cin>>m;

  int k;
  for(int i=n+1; i!=0; i++){

    if(isPrime(i)==1)
    {
        k=i;
        break;

    }

  }

  if(k==m)
  {
      cout<<"YES"<<endl;

  }else {

  cout<<"NO"<<endl;

  }



}
int isPrime(int n)
{
    for(int i=2; i<n; i++)
    {

        if(n%i==0)
        {
            return 0;

        }
    }
    return 1;

}






