
#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int s =log10(n) + 1;
        int k =s-1;
        vector<int>ar;
        int rev=0;
        int rem;

        for(int i=n; i!=0; i=i/10)
        {
            rem = i%10;
            rev = rev * 10 + rem;


        }
        int rem2;


        for(int i=rev; i!=0; i=i/10)
        {
            rem2 = i%10;


            if(rem2!=0)
            {
                int val = rem2 * pow(10,k);
                ar.push_back(val);

            }
            k--;

        }

        cout<<ar.size()<<endl;

        for(int i=0; i<ar.size(); i++)
        {

            cout<<ar[i]<<" ";
        }
        cout<<endl;


    }




}
