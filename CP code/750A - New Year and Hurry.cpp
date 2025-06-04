#include<bits/stdc++.h>
using namespace std;
int main()
{
int n, k;
    cin>>n>>k;
    int time = 1200+k;
    int endTime = 1440;
    int spare = endTime -time;
    int task = 0;
    int cnt=0;

    for(int i=1; i<=n; i++)
    {
          task += i * 5;

        if(task <= spare  )
        {

          cnt = i;
        }

    }

    cout<<cnt<<endl;


}
