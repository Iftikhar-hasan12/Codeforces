
#include<bits/stdc++.h>
using namespace std;

int main()
{


    int t;
    cin>>t;
    while(t--){
    int k;
    cin>>k;

    vector<int> ar;

    int f=0;

    for(int i=0; i<=2005; i++)
    {
        int rem = f%10;

        if(rem!=3 && f%3!=0)
        {
            ar.push_back(f);

        }
           f++;

    }


    cout<<ar[k-1]<<endl;

   }
}
