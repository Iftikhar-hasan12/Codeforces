#include<bits/stdc++.h>
using namespace std;
int main()

{
    long long  int n, k;
    cin>>n>>k;

    while(k--)
    {
      int  rem = n %10;
        if(rem==0)
        {
            n =n/10;
        }
        else
        {

            n --;


        }


    }

    cout<<n<<endl;



}
