#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    vector< long long int> ar;
 long long int maxi = LLONG_MIN;
long long int  mini = LLONG_MAX;



    for(long long int i=0; i<n; i++)
    {

       long long int val;
        cin>>val;
        ar.push_back(val);
        if(val > maxi )
        {
            maxi =val;

        }
        if(val<mini )
        {
            mini = val;

        }

    }



 long  long  int max_cnt=0;
  long long  int mini_cnt=0;

    for(long long int i=0; i<n; i++)
    {
             if( maxi == ar[i])
             {
                 max_cnt++;

             }


          if( mini == ar[i])
             {
                 mini_cnt++;

             }


    }



//
//cout<<"Maxi : "<<max_cnt<<endl;;
//cout<<"Mini : "<<mini_cnt<<endl;


long long int cnt = (mini == maxi) ? (n * (n - 1)) / 2 : mini_cnt * max_cnt;



    cout<<maxi-mini <<" "<<cnt<<endl;




}
