
#include<bits/stdc++.h>
using namespace std;



int isPrime(int n);

int main()
{

    int n;
    cin>>n;
   int sum =0;

    for(int i=0; i<n; i++)
    {

        int val;
        cin>>val;
        sum+=val;

    }

    cout<<(float)sum/n<<endl;

}
