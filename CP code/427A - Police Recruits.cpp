
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    int rkt=0, k=0;
    cin>>n;
    vector<int>ar;

    while(n--)
    {
        int val;
        cin>>val;
        ar.push_back(val);
    }

    for(int x: ar)
    {
        if(x>0)
        {
            rkt+=x;
        }
        else
        {


            rkt = rkt+x;

            if(rkt >= 0)
            {
                continue;

            }

            rkt=0;
            k++;



        }


    }

    cout<<k<<endl;


}
