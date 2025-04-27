#include<bits/stdc++.h>
using namespace std;


int main()
{
    int ar []= {1,2,3,4,5};
    int k;
    cin>>k;
int sum =0;
int i =4;
int j = 1;
int prev =0;
    while(true)
    {
        sum = sum+ar[i];


        if(sum==k)
        {
            cout<<j<<endl;
            return 0;

        }
        else if( sum < k)

        {

            prev = sum ;
            j++;

        }
        else if(sum>k)
        {
             sum = prev ;
            i--;
        }

    }



}
